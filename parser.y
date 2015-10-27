%{
	#include <stdio.h>
	#include <string.h>
	#include <vector>
	long line_counter = 0L;
	std::vector<char*> tablasExistentes;
	std::vector<char*> columnasExistentes;
	short err = 0;
%}

%union{
	char *mystring;
}

%token CREATE
%token IDENTIFIER
%token END
%token PARENTESIS_IZQUIERDO
%token PARENTESIS_DERECHO
%token DOTCOMA
%token COMA
%token PARENTESIS_CUADRADO_IZQUIERDO
%token PARENTESIS_CUADRADO_DERECHO
%token COLUMN_MODIFIER
%token DATATYPE

%start initial

%%

initial:
	CREATE IDENTIFIER table DOTCOMA
	| CREATE IDENTIFIER table DOTCOMA initial {return 0;}
;

table:
	PARENTESIS_IZQUIERDO columnas PARENTESIS_DERECHO
	
;

columnas:
	IDENTIFIER DATATYPE COLUMN_MODIFIER
	| IDENTIFIER DATATYPE COLUMN_MODIFIER COMA columnas
;


%%

#include "lex.yy.c"
int main(int argc, char** args){
	if (argc == 3){
		if (yyin = fopen(args[1],"r")){
			yyout = fopen(args[2],"w+");
			yyparse();
			fclose(yyin);
			fclose(yyout);
			if (err){
				remove(args[2]);
			}
		}
		else printf("el archivo \"%s\" no existe\n", args[1]);
	}
	else{
		printf("Para compilar debe insertar los argumentos:\n");
		printf("\t1) archivo de entrada\n");
		printf("\t2) archivo de salida\n");
	}
	return 0;
}

int yyerror( char *s ) {
	fprintf(stderr,"%s: %s at line %ld\n", s, yytext,line_counter);
	err = 1;
	return -1;
}
