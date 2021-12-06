%{
    #include "tokens.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>

    char string_buffer[256];
    int errorCounter = 0;

    void print_token(int token_id);
    int str_to_int(char *str);
    float hex_to_float(char *str);
    float str_to_float(char *str);
    void yyerror(const char *err);

%}

%option noyywrap 
%option case-insensitive
%option yylineno

%x STRING
%x COMMENTS

ID          _?[a-zA-Z]([a-zA-Z0-9_]*[a-zA-Z0-9]|[a-zA-Z0-9]*)
ICONST      [1-9][0-9]*|0x[1-9A-F][0-9A-F]*|0
CCONST      ('[\x20-\x7E]')|('\\[nftrbv]')
RCONST      (([1-9][0-9]*|0)?\.([0-9]+[1-9]+|[0-9])([eE](\+|-)?([1-9][0-9]*|0))?)|((0|[1-9][0-9]*)([eE](\+|-)?([1-9][0-9]*|0)))|(0[xX]([0-9A-F][0-9A-F]*)?\.([0-9A-F]+))

%%

"PROGRAM"          { print_token( T_PROGRAM   );       return T_PROGRAM    ;}
"CONST"            { print_token( T_CONST     );       return T_CONST      ;}
"TYPE"             { print_token( T_TYPE      );       return T_TYPE       ;}
"COUPLE"           { print_token( T_COUPLE    );       return T_COUPLE     ;}
"ARRAY"            { print_token( T_ARRAY     );       return T_ARRAY      ;}
"OF"               { print_token( T_OF        );       return T_OF         ;}
"VAR"              { print_token( T_VAR       );       return T_VAR        ;}
"FORWARD"          { print_token( T_FORWARD   );       return T_FORWARD    ;}
"FUNCTION"         { print_token( T_FUNCTION  );       return T_FUNCTION   ;}
"PROCEDURE"        { print_token( T_PROCEDURE );       return T_PROCEDURE  ;}
"INTEGER"          { print_token( T_INTEGER   );       return T_INTEGER    ;}
"REAL"             { print_token( T_REAL      );       return T_REAL       ;}
"BOOLEAN"          { print_token( T_BOOLEAN   );       return T_BOOLEAN    ;}
"CHAR"             { print_token( T_CHAR      );       return T_CHAR       ;}
"STRING"           { print_token( T_STRING    );       return T_STRING     ;}
"BEGIN"            { print_token( T_BEGIN     );       return T_BEGIN      ;}
"END"              { print_token( T_END       );       return T_END        ;}
"IF"               { print_token( T_IF        );       return T_IF         ;}
"THEN"             { print_token( T_THEN      );       return T_THEN       ;}
"ELSE"             { print_token( T_ELSE      );       return T_ELSE       ;}
"CASE"             { print_token( T_CASE      );       return T_CASE       ;}
"OTHERWISE"        { print_token( T_OTHERWISE );       return T_OTHERWISE  ;}
"WHILE"            { print_token( T_WHILE     );       return T_WHILE      ;}
"DO"               { print_token( T_DO        );       return T_DO         ;}
"FOR"              { print_token( T_FOR       );       return T_FOR        ;}
"DOWNTO"           { print_token( T_DOWNTO    );       return T_DOWNTO     ;}
"TO"               { print_token( T_TO        );       return T_TO         ;}
"READ"             { print_token( T_READ      );       return T_READ       ;}
"WRITE"            { print_token( T_WRITE     );       return T_WRITE      ;}
"LENGTH"           { print_token( T_LENGTH    );       return T_LENGTH     ;}


">="               { print_token( T_RELOP  );      return T_RELOP  ;}
"<="               { print_token( T_RELOP  );      return T_RELOP  ;}
"<>"               { print_token( T_RELOP  );      return T_RELOP  ;}
">"                { print_token( T_RELOP  );      return T_RELOP  ;}
"<"                { print_token( T_RELOP  );      return T_RELOP  ;}
"+"                { print_token( T_ADDOP  );      return T_ADDOP  ;} 
"-"                { print_token( T_ADDOP  );      return T_ADDOP  ;}
"OR"               { print_token( T_OROP   );      return T_OROP   ;}
"*"                { print_token( T_MULDIVANDOP ); return T_MULDIVANDOP ;}
"DIV"              { print_token( T_MULDIVANDOP ); return T_MULDIVANDOP ;}
"MOD"              { print_token( T_MULDIVANDOP ); return T_MULDIVANDOP ;}
"AND"              { print_token( T_MULDIVANDOP ); return T_MULDIVANDOP ;}
"NOT"              { print_token( T_NOTOP  );      return T_NOTOP  ;}
"HEAD"             { print_token( T_PAIROP );      return T_PAIROP ;}
"TAIL"             { print_token( T_PAIROP );      return T_PAIROP ;}


"("                { print_token( T_LPAREN );  return T_LPAREN     ;}
")"                { print_token( T_RPAREN );  return T_RPAREN     ;}
";"                { print_token( T_SEMI   );  return T_SEMI       ;}
".."               { print_token( T_DOTDOT );  return T_DOTDOT     ;}
"."                { print_token( T_DOT    );  return T_DOT        ;}
","                { print_token( T_COMMA  );  return T_COMMA      ;}
":="               { print_token( T_ASSIGN );  return T_ASSIGN     ;}
"="                { print_token( T_EQU    );  return T_EQU        ;}
":"                { print_token( T_COLON  );  return T_COLON      ;}
"["                { print_token( T_LBRACK );  return T_LBRACK     ;}
"]"                { print_token( T_RBRACK );  return T_RBRACK     ;}

"TRUE"             { print_token( T_BCONST );     return T_BCONST  ;}
"FALSE"            { print_token( T_BCONST );     return T_BCONST  ;}
{ID}               { print_token( T_ID     );     return T_ID      ;}
{ICONST}           { print_token( T_ICONST );     return T_ICONST  ;}
{RCONST}           { print_token( T_RCONST );     return T_RCONST  ;}
{CCONST}           { print_token( T_CCONST );     return T_CCONST  ;}


\"                          { strcpy(string_buffer,"");    BEGIN(STRING)   ;}
<STRING>\"                  { BEGIN(INITIAL);              printf("LINE[%d] STRING TOKEN: %s\n",yylineno,string_buffer); return T_SCONST  ;}
<STRING>(\\\n|\\\r\n)       { }
<STRING>(\\.|[^"\\])        {   
                                if(strlen(yytext) == 2){
                                    if(strcmp(yytext,"\\n") == 0){
                                        strcat(string_buffer,"\n");
                                    }else if(strcmp(yytext,"\\t") == 0){
                                        strcat(string_buffer,"\t");
                                    }else if(strcmp(yytext,"\\b") == 0){
                                        strcat(string_buffer,"\b");
                                    }else if(strcmp(yytext,"\\v") == 0){
                                        strcat(string_buffer,"\v");
                                    }else if(strcmp(yytext,"\\f") == 0){
                                        strcat(string_buffer,"\f");
                                    }else if(strcmp(yytext,"\\r") == 0){
                                        strcat(string_buffer,"\r");
                                    }
                                }else{
                                    strcat(string_buffer,yytext);
                                }                                
                            }
<STRING>(\n|\r\n)           { yyerror("New line found wihtout \\.")        ;}
<STRING><<EOF>>             { yyerror("End of string without closing it.") ;}
<STRING>.                   { yyerror("\nUNKNOWN CHARACTER.")              ;}


\{                          { printf("LINE[%d] Comment Found\n",yylineno);  BEGIN(COMMENTS) ;}
<COMMENTS>\}                { BEGIN(INITIAL);  printf("LINE[%d] Comment Ended \n",yylineno) ;}
<COMMENTS>\n                { }
<COMMENTS>.                 { }

        
[ \t]              { }
\n                 { }
<<EOF>>            { print_token( T_EOF );  return T_EOF  ;}
.                  { yyerror("UNKNOWN CHARACTER.")        ;}

%%

int main(int argc,char *argv[]) {

    int token;
    if(argc > 1){
        yyin = fopen(argv[1],"r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    do{
        token = yylex();
    } while(token != T_EOF);

    fclose(yyin);
    yyterminate();

    return 0;

}

void print_token(int token_id){

    if(token_id == T_ICONST){

        printf("LINE[%d] INTEGER TOKEN \'%s\'.Base 10: %d token id:%d\n",yylineno,yytext,str_to_int(yytext),token_id);

    }else if(token_id == T_RCONST){ 

        printf("LINE[%d] FLOAT TOKEN \'%s\'.Base 10: %f token id:%d\n",yylineno,yytext,str_to_float(yytext),token_id);

    }else{
        printf("LINE[%d] TOKEN \'%s\' (%d)\n",yylineno,yytext,token_id);
    }
}

int str_to_int(char *str){

    if((strncmp(str,"0x",2) == 0) || strncmp(str,"0X",2) == 0){
        return (int) strtoll(&str[2],NULL,16);
    }else{
        return (int) strtoll(str,NULL,10);
    }

}

float str_to_float(char *str){

    if((strncmp(str,"0x",2) == 0) || strncmp(str,"0X",2) == 0){
        return hex_to_float(str);
    }else{
        return (float) strtof(str, NULL);
    }

}

float hex_to_float(char *str){

    //na balw na anagnwrizei meta apo . dekaexadiko px-> .FF123

    float num = 0.0;
    int i,length_real;
    char *character;

    //briskeis to string apo th teleia kai meta (dekadiko meros)
    character = strchr(str,'.');
    length_real = strlen(character)-1;

    //kaneis ton dekaexadiko prin thn teleia dekadiko
    num = (int)strtoll(&character[2],&character,16);

    //metatrepeis kai prostheteis kathe fora to epomeno dekaexadiko
    for(i=1;i<=length_real;i++){
        if(character[i] <= '9'){
            //afaireis ton arithmo sto ascii apo to 0 gia na pareis ton arithmo kai ton pollaplasiazeis gia na parei thn antistixh thesh sto dekadiko kommati
            num += (character[i] - '0') * (1/pow(16,i));
        }else{
            num += (character[i] + 10 - 'A') * (1/pow(16,i));
        }
    }

    return num;
}

void yyerror(const char *err){
    
    errorCounter += 1;
    printf("[ERROR - LINE %d] %s\n",yylineno,err);

    if(errorCounter == 5){
        printf("MAXIMUM NUMBER OF ERRORS DETECTED\n");
        exit(EXIT_FAILURE);
    }

    //prospatheia sbhsimo lanthasmenou xaraktira
    yyless(1);
}