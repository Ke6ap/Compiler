%{

    #include <stdio.h>
    #include <stdlib.h>
    #include "hashtbl.h"
    
    extern FILE *yyin;
    extern int  yylex();
    extern void yyerror(const char *err);
    void false_end_check(void);
    void end_of_declarations_check(void);

    HASHTBL *hashtbl;
    int scope = 0;

    int begin_count = 0;
    int end_count = 0;
    int declarations_end = 0;

%}

%define parse.error verbose

%union{
    int     intval;
    double  doubleval;
    int     boolval;
    char    charval;
    char    *stringval;
}

%token T_EOF            0                   "EOF"
%token T_PROGRAM        "program"
%token T_CONST          "const"
%token T_TYPE           "type"
%token T_COUPLE         "coyple"
%token T_ARRAY          "array"
%token T_OF             "of"
%token T_VAR            "var"
%token T_FORWARD        "froward"
%token T_FUNCTION       "function"
%token T_PROCEDURE      "procedure"
%token T_INTEGER        "integer"
%token T_REAL           "real"
%token T_BOOLEAN        "boolean"
%token T_CHAR           "char"
%token T_STRING         "string"
%token T_BEGIN          "begin"
%token T_END            "end"
%token T_IF             "if"
%token T_THEN           "then"
%token T_ELSE           "else"
%token T_CASE           "case"
%token T_OTHERWISE      "otherwise"
%token T_WHILE          "while"
%token T_DO             "do"
%token T_FOR            "for"
%token T_DOWNTO         "downto"
%token T_TO             "to"
%token T_READ           "read"
%token T_WRITE          "write"
%token T_LENGTH         "length"

%token T_RELOP          "> >= < <= <>"
%token T_ADDOP          "+ -"
%token T_OROP           "orop"
%token T_MULDIVANDOP    "* / DIV MOD AND"
%token T_NOTOP          "notop"
%token T_PAIROP         "HEAD TAIL"
%token T_LPAREN         "("
%token T_RPAREN         ")"
%token T_SEMI           ";"
%token T_DOTDOT         ".."
%token T_DOT            "."
%token T_COMMA          ","
%token T_ASSIGN         ":="
%token T_EQU            "="
%token T_COLON          ":"
%token T_LBRACK         "["
%token T_RBRACK         "]"

%token  <stringval>     T_ID             "id"
%token  <intval>        T_ICONST         "iconst"
%token  <boolval>       T_BCONST         "bconst"
%token  <charval>       T_CCONST         "cconst"
%token  <stringval>     T_SCONST         "sconst"
%token  <doubleval>     T_RCONST         "rconst"

//auto einai gia ta warnings
//%type   <stringval>  program header declarations constdefs constant_defs expression variable expressions constant typedefs type_defs type_def dims limits limit sign typename standard_type vardefs variable_defs identifiers subprograms subprogram sub_header formal_parameters parameter_list pass comp_statement statements statement assignment if_statement if_tail while_statement for_statement iter_space subprogram_call io_statement read_list read_item write_list write_item

%left T_COMMA
%left T_RELOP
%left T_ASSIGN
%left T_EQU
%left T_OROP
%left T_ADDOP
%left T_MULDIVANDOP
%left T_PAIROP
%left T_NOTOP
%left T_LPAREN T_RPAREN T_LBRACK T_RBRACK T_DOT T_DOTDOT

%nonassoc NO_ELSE
%nonassoc T_ELSE

%%

program:            header declarations subprograms comp_statement T_DOT
                    ;

header:             T_PROGRAM   T_ID  T_SEMI { hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    | error     T_ID  T_SEMI { hashtbl_insert(hashtbl, $2 ,NULL,scope); yyerror("Wrong program declaration"); yyerrok ; }
                    | T_PROGRAM error T_SEMI { yyerror("Wrong program declaration"); yyerrok ; }
                    | T_PROGRAM T_ID  error  { hashtbl_insert(hashtbl, $2 ,NULL,scope); yyerror("Wrong program declaration"); yyerrok ; }
                    ;

declarations:       constdefs typedefs vardefs
                    ;

constdefs:          T_CONST     constant_defs   T_SEMI
                    | error     constant_defs   T_SEMI  
                    | T_SCONST  error           T_SEMI  
                    | T_CONST   constant_defs   error   { yyerror("Forgot semicolon"); yyerrok ; }
                    | %empty                            { }
                    ;

constant_defs:      constant_defs T_SEMI T_ID T_EQU expression  { hashtbl_insert(hashtbl, $3 ,NULL,scope); }
                    | T_ID T_EQU expression                     { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

expression:         expression   T_RELOP expression
                    | expression T_EQU   expression
                    | expression T_OROP  expression
                    | expression T_ADDOP expression
                    | expression T_MULDIVANDOP expression
                    | T_ADDOP expression
                    | T_NOTOP expression
                    | T_PAIROP expression
                    | variable
                    | T_ID T_LPAREN expressions T_RPAREN                { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    | T_LENGTH T_LPAREN expression T_RPAREN
                    | constant
                    | T_LPAREN expression T_COLON expression T_RPAREN
                    | T_LPAREN expression T_RPAREN
                    | error expression T_RPAREN                         { yyerror("Forgot opening parenthesis"); yyerrok ; }
                    | T_LPAREN expression error                         { yyerror("Forgot closing parenthesis"); yyerrok ; }
                    | T_LPAREN expression T_COLON expression error      { yyerror("Forgot closing parenthesis"); yyerrok ; }
                    | error expression T_COLON expression error         { yyerror("Forgot opening parenthesis"); yyerrok ; }
                    ;

variable:           T_ID                                        { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    | variable  T_LBRACK  expressions T_RBRACK
                    | variable  T_LBRACK  expressions error     { yyerror("Missing closing bracket"); yyerrok ; }
                    ;   

expressions:        expressions T_COMMA expression
                    | expression
                    ;

constant:           T_ICONST
                    | T_RCONST
                    | T_BCONST
                    | T_CCONST
                    | T_SCONST
                    ;

typedefs:           T_TYPE type_defs T_SEMI
                    | %empty    { }
                    ;

type_defs:          type_defs T_SEMI T_ID T_EQU type_def        { hashtbl_insert(hashtbl, $3 ,NULL,scope); }
                    | T_ID T_EQU type_def                       { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

type_def:           T_ARRAY T_LBRACK dims T_RBRACK T_OF typename
                    | T_COUPLE T_OF typename
                    | limit T_DOTDOT limit
                    ;

dims:               dims T_COMMA limits
                    | limits
                    ;

limits:             limit T_DOTDOT limit
                    | T_ID                  { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

limit:              sign T_ICONST
                    | T_CCONST
                    | T_BCONST
                    | T_ADDOP T_ID          { hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    | T_ID                  { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

sign:               T_ADDOP | %empty        { }
                    ;

typename:           standard_type
                    | T_ID                  { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

standard_type:      T_INTEGER | T_REAL | T_BOOLEAN | T_CHAR | T_STRING
                    ;

vardefs:            T_VAR variable_defs T_SEMI
                    | %empty    { }
                    ;

variable_defs:      variable_defs T_SEMI identifiers T_COLON typename
                    | identifiers T_COLON typename
                    ;

identifiers:        identifiers T_COMMA T_ID { hashtbl_insert(hashtbl, $3 ,NULL,scope); }
                    | T_ID                   { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

subprograms:        subprograms subprogram T_SEMI
                    | %empty    { }
                    ;

subprogram:         sub_header T_SEMI T_FORWARD 
                    | sub_header T_SEMI declarations subprograms comp_statement
                    ;

sub_header:         T_FUNCTION    T_ID formal_parameters T_COLON typename   { end_of_declarations_check(); hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    | T_PROCEDURE T_ID formal_parameters                    { declarations_end =1; scope += 1; hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    | T_FUNCTION  T_ID                                      { end_of_declarations_check(); hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    ;

formal_parameters:  T_LPAREN parameter_list T_RPAREN
                    | %empty    { }
                    ;

parameter_list:     parameter_list T_SEMI pass identifiers T_COLON typename
                    | pass identifiers T_COLON typename
                    ;

pass:               T_VAR | %empty  { }
                    ;

comp_statement:     T_BEGIN { begin_count++; } statements T_END { end_count++; false_end_check(); }
                    ;

statements:         statements T_SEMI statement
                    | statement
                    ;

statement:          assignment
                    | if_statement
                    | while_statement
                    | for_statement
                    | subprogram_call
                    | io_statement
                    | comp_statement
                    | %empty    { }
                    ;

assignment:         variable T_ASSIGN   expression
                    | variable error    expression  { yyerror("Wrong assignment"); yyerrok ; }
                    ;

if_statement:       T_IF expression T_THEN statement if_tail
                    ;

if_tail:            T_ELSE statement
                    | %empty { } %prec NO_ELSE
                    ;

while_statement:    T_WHILE expression T_DO statement
                    ;

for_statement:      T_FOR T_ID T_ASSIGN iter_space T_DO statement   { hashtbl_insert(hashtbl, $2 ,NULL,scope); }
                    ;

iter_space:         expression T_TO expression
                    | expression T_DOWNTO expression
                    ;

subprogram_call:    T_ID                                            { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    | T_ID T_LPAREN expressions T_RPAREN            { hashtbl_insert(hashtbl, $1 ,NULL,scope); }
                    ;

io_statement:       T_READ T_LPAREN read_list T_RPAREN
                    | T_WRITE T_LPAREN write_list T_RPAREN
                    ;

read_list:          read_list T_COMMA read_item
                    | read_item
                    ;

read_item:          variable
                    ;

write_list:         write_list T_COMMA write_item
                    | write_item
                    ;

write_item:         expression
                    ;


%%

int main(int argc,char *argv[]) {

    int token;

    if(!(hashtbl = hashtbl_create(50,NULL))){
        printf("eEror failed to intialize hashtabl");
        exit(EXIT_FAILURE);
    }

    if(argc > 1){
        yyin = fopen(argv[1],"r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    yyparse();

    fclose(yyin);
    hashtbl_destroy(hashtbl);

    return 0;

}

void false_end_check(void){

    /*
        An sunantisei perissotera begin apo end meiwnei to begin kata 1 kai
        psaxnei to kurio swma ths function/procedure to opoio einai to end = 1
    */

    if (begin_count == end_count){
        hashtbl_get(hashtbl,scope); 
        scope -= 1; 
        begin_count =0 ; 
        end_count = 0 ;
    }else{
        begin_count--; 
        end_count = 0;
    }
    return;
}

void end_of_declarations_check(void){

    /*
        Meta th dhlwsh toy prwtoy procedure teleiwnei to kommati ths dhlwshs synarthsewn
        ara de xreiazetai na kanoume kati me to token forward
    */
    
    if (declarations_end){
        scope++;
    }else{
        return;
    }
}