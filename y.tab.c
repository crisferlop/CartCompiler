#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
	#include <stdio.h>
	#include <string.h>
	#include <vector>
	#include "varint.h"
	long line_counter = 1L;
	short err = 0;
	short debug = 0;
	long block = 0;
	std::vector< VarInt * > BlockList;
#line 13 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	char* str;
	int integer;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 41 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define DEFINE 257
#define AS 258
#define BLOCKS 259
#define VALUE_SENTENCE 260
#define SET 261
#define OUT 262
#define FOR 263
#define GO 264
#define BACK 265
#define STRAIGHT 266
#define TILL 267
#define TURN 268
#define LEFT 269
#define RIGHT 270
#define KEEP 271
#define GOING 272
#define SKIP 273
#define KEEPEND 274
#define FOR_CYCLE 275
#define TIMES 276
#define LEFT_SQUARE_BRACKED 277
#define WALK 278
#define RIGHT_SQUARE_BRACKED 279
#define FOREND 280
#define WHEN 281
#define THEN 282
#define WHEND 283
#define START 284
#define STOP 285
#define ON 286
#define REST 287
#define VALUE 288
#define IDENTIFIER 289
#define WHITE_SPACE 290
#define DOTCOMA 291
#define OPERATOR 292
#define LEFT_BLOCK_BRACKED 293
#define RIGHT_BLOCK_BRACKED 294
#define EQUAL 295
#define NOT_EQUAL 296
#define HIGH 297
#define LESS 298
#define EQUAL_HIGH 299
#define EQUAL_LESS 300
#define PRINT 301
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    3,    3,    3,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    6,    6,    7,    7,
    1,    1,    2,    2,    4,    8,    8,    8,    8,    8,
    8,
};
static const short yylen[] = {                            2,
    1,    2,    8,   13,    1,    6,    6,    3,    5,    7,
    3,    2,    2,    3,    4,    3,    1,    1,    1,    1,
    1,    3,    1,    1,    3,    1,    1,    1,    1,    1,
    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    5,    0,   24,   23,    0,    0,   18,   17,
    0,   19,   20,    0,    0,    0,    0,    0,   12,   13,
    0,    0,    2,    0,    0,    0,    0,    8,   14,   11,
    0,   26,   27,   28,   29,   30,   31,    0,    0,    0,
   16,    0,    0,   22,    0,    0,    0,   25,    0,   15,
    9,    0,    0,    0,    0,    0,    0,    7,    6,    0,
    0,   10,    0,    0,    0,    3,    0,    0,    0,    0,
    4,
};
static const short yydgoto[] = {                         11,
   17,   18,   12,   28,   13,   21,   25,   48,
};
static const short yysindex[] = {                      -255,
 -285, -277, -251, -253, -282, -277, -283, -269, -242, -277,
    0, -255,    0, -235,    0,    0, -237, -267,    0,    0,
 -257,    0,    0, -264, -250, -245, -260, -240,    0,    0,
 -277, -248,    0, -215, -214, -277, -270,    0,    0,    0,
 -228,    0,    0,    0,    0,    0,    0, -277, -243, -239,
    0, -238, -212,    0, -205, -204, -222,    0, -255,    0,
    0, -232, -233, -231, -229, -230, -225,    0,    0, -227,
 -220,    0, -218, -224, -223,    0, -255, -226, -211, -219,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    1,    0,    0,    0,    0,    0, -190,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                       -12,
   37,   -3,    0,    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 295
static const short yytable[] = {                         33,
    1,    1,   27,   14,    2,   26,   32,   29,    3,   37,
   15,   16,    4,   19,   20,   22,   23,   55,   56,    5,
   31,   30,   34,   35,   36,    6,   39,   50,    7,    8,
   41,    9,   24,   38,   42,   43,   44,   45,   46,   47,
   40,   49,   51,   52,   58,   10,   66,   53,   57,   59,
   62,   60,   61,   63,   64,   65,   67,   68,   70,   69,
   75,   73,   74,   71,   78,   72,   76,   79,   80,   77,
   21,   81,   54,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1,
};
static const short yycheck[] = {                         12,
    0,  257,    6,  289,  260,  288,   10,  291,  264,  267,
  288,  289,  268,  265,  266,  269,  270,  288,  289,  275,
  263,  291,  258,  261,  292,  281,  291,   31,  284,  285,
  276,  287,  286,  291,  295,  296,  297,  298,  299,  300,
  291,  282,  291,  259,   48,  301,   59,  262,  277,  293,
  263,  291,  291,  259,  259,  278,  289,  291,  288,  291,
  279,  289,  283,  294,   77,  291,  291,  294,  280,  293,
  261,  291,   36,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  294,
};
#define YYFINAL 11
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 301
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"DEFINE","AS","BLOCKS",
"VALUE_SENTENCE","SET","OUT","FOR","GO","BACK","STRAIGHT","TILL","TURN","LEFT",
"RIGHT","KEEP","GOING","SKIP","KEEPEND","FOR_CYCLE","TIMES",
"LEFT_SQUARE_BRACKED","WALK","RIGHT_SQUARE_BRACKED","FOREND","WHEN","THEN",
"WHEND","START","STOP","ON","REST","VALUE","IDENTIFIER","WHITE_SPACE","DOTCOMA",
"OPERATOR","LEFT_BLOCK_BRACKED","RIGHT_BLOCK_BRACKED","EQUAL","NOT_EQUAL",
"HIGH","LESS","EQUAL_HIGH","EQUAL_LESS","PRINT","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : initial",
"initial : expresion",
"initial : expresion initial",
"expresion : WHEN condition THEN LEFT_BLOCK_BRACKED initial RIGHT_BLOCK_BRACKED WHEND DOTCOMA",
"expresion : FOR_CYCLE VALUE TIMES LEFT_SQUARE_BRACKED WALK VALUE IDENTIFIER RIGHT_SQUARE_BRACKED LEFT_BLOCK_BRACKED initial RIGHT_BLOCK_BRACKED FOREND DOTCOMA",
"expresion : simple_expresion",
"simple_expresion : GO Ydirection TILL IDENTIFIER BLOCKS DOTCOMA",
"simple_expresion : GO Ydirection TILL VALUE BLOCKS DOTCOMA",
"simple_expresion : GO Ydirection DOTCOMA",
"simple_expresion : DEFINE IDENTIFIER AS BLOCKS DOTCOMA",
"simple_expresion : VALUE_SENTENCE mathematicExpresion SET OUT FOR IDENTIFIER DOTCOMA",
"simple_expresion : TURN turndirection DOTCOMA",
"simple_expresion : START DOTCOMA",
"simple_expresion : STOP DOTCOMA",
"simple_expresion : TURN ON DOTCOMA",
"simple_expresion : REST FOR aValue DOTCOMA",
"simple_expresion : PRINT aValue DOTCOMA",
"Ydirection : STRAIGHT",
"Ydirection : BACK",
"turndirection : LEFT",
"turndirection : RIGHT",
"mathematicExpresion : aValue",
"mathematicExpresion : aValue OPERATOR mathematicExpresion",
"aValue : IDENTIFIER",
"aValue : VALUE",
"condition : aValue comparator aValue",
"comparator : EQUAL",
"comparator : NOT_EQUAL",
"comparator : HIGH",
"comparator : LESS",
"comparator : EQUAL_HIGH",
"comparator : EQUAL_LESS",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 158 "parser.y"

#include "lex.yy.c"
int main(int argc, char** args){
	if (argc == 3 || argc == 4){
		if (yyin = fopen(args[1],"r")){
			if (argc == 4 && strcmp(args[3],"-d")==0){debug = 1;printf("Debuger encendido\n");}
			else if (argc == 4){
				printf("Error del tercer argumento, solamente se admite \"-d\", sin comillas\n");
				printf("Dicho argumento es para debugear la compilacion\n");
				fclose(yyin);
				return -1;
			}
			yyout = fopen(args[2],"w+");
			yyparse();
			fclose(yyin);
			fclose(yyout);

			if (err){
				remove(args[2]);
				printf("Error de compilacion!\n");
			}else{
				printf("Compilacion terminada con exito!\n");
			}
		}
		else printf("el archivo \"%s\" no existe\n", args[1]);
	}
	else{
		printf("Para compilar debe insertar los argumentos:\n");
		printf("\t1) archivo de entrada\n");
		printf("\t2) archivo de salida\n");
		printf("\t3) -d para debugeo, este argumento es opcional\n");
	}
	return 0;
}
int yyerror(const char* s ) {
	yyerrok;
	fprintf(stderr,"%s: %s at line %ld\n", s, yytext,line_counter);
    	yyclearin;
	err = 1;
//	return err;
}
#line 370 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 82 "parser.y"
	{block++;}
break;
case 4:
#line 83 "parser.y"
	{block++;printf("For cycle:\n");}
break;
case 6:
#line 90 "parser.y"
	{printf("hello %s\n", yystack.l_mark[-2].str);}
break;
case 7:
#line 91 "parser.y"
	{printf("hello %d\n", yystack.l_mark[-2].integer);}
break;
case 8:
#line 92 "parser.y"
	{printf("hello %s\n", yylval.str);}
break;
case 9:
#line 93 "parser.y"
	{BlockList.push_back(new VarInt(yystack.l_mark[-3].str,strlen(yystack.l_mark[-3].str),block,0));printf("definiendo variable: %s\n", yystack.l_mark[-3].str);}
break;
case 10:
#line 95 "parser.y"
	{
for (int i = 0; i < BlockList.size();i++){
	if (strcmp(BlockList.at(i)->getName(), yystack.l_mark[-1].str) == 0){
		BlockList.back()->setInteger(yystack.l_mark[-5].integer);
		printf("el valor de \"%s\" es: %d\n", yystack.l_mark[-1].str , yystack.l_mark[-5].integer);
		break;
	}
}

}
break;
case 16:
#line 110 "parser.y"
	{ printf("el valor es: %d; \n", yystack.l_mark[-1].integer);}
break;
case 21:
#line 124 "parser.y"
	{printf("valor = %d \n", yystack.l_mark[0].integer);yyval.integer = yystack.l_mark[0].integer;}
break;
case 22:
#line 125 "parser.y"
	{printf("on operator\n");yyval.integer = yystack.l_mark[-2].integer + yystack.l_mark[0].integer;}
break;
case 23:
#line 130 "parser.y"
	{int i = 0; for (; i < BlockList.size();i++){
	if (strcmp(BlockList.at(i)->getName(), yystack.l_mark[0].str) == 0){
		yyval.integer = BlockList.back()->getInteger();
		break;
	}
  }
 if (i == BlockList.size()){printf("[error]: La variable \"%s\" no existe, se cerrara el programa!.\n", yystack.l_mark[0].str);err= 1;return 0;}
}
break;
case 24:
#line 139 "parser.y"
	{yyval.integer = yystack.l_mark[0].integer;}
break;
#line 636 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
