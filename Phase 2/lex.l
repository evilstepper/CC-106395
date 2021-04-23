%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "code.h"
#include "yyyy.tab.h"

int yylineno;
%}

%option noyywrap

%%
"class"                       { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Class; }
"public"                      { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Public; }
"static"                      { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Static; }
"void"                        { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Void; }
"main"                        { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Main; }
"if"                          { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return If; }
"else"                        { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Else; }
"while"                       { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return While; }
"Extends"                    { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Extends; }
"int"                         { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Integer; }
"boolean"                     { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Boolean; }
"String"                      { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return String; }
"true"                        { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return True; }
"false"                       { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return False; }
"this"                        { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return This; }
"new"                         { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return New; }
"System.out.println"          { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Println; }
"length"                      { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Length; }
"return"                      { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Return; }
[a-zA-Z]([a-zA-Z]|[0-9]|"_")* { 
                                char *val = (char*)malloc(strlen("identifier: ")+strlen(yytext)+10);
                                sprintf(val, "identifier: %s", yytext);
                                yylval.code = new_code(val, 0);
                                yylval.code->line = yylineno;
                                return Id;
                              }
[1-9]([0-9])*                 { 
                                char *val = (char*)malloc(strlen("IntegerIteral: ")+strlen(yytext)+10);
                                sprintf(val, "IntegerIteral: %s", yytext);
                                yylval.code = new_code(val, 0); 
                                yylval.code->line = yylineno;
                                return IntegerIteral;
                              }
("0x"|"0X")([0-9]|[a-fA-F])+  { 
                                char *val = (char*)malloc(strlen("IntegerIteral: ")+strlen(yytext)+10);
                                sprintf(val, "IntegerIteral: %s", yytext);
                                yylval.code = new_code(val, 0); 
                                yylval.code->line = yylineno;
                                return IntegerIteral; 
                              }
("0b"|"0B")("0"|"1")+         { 
                                char *val = (char*)malloc(strlen("IntegerIteral: ")+strlen(yytext)+10);
                                sprintf(val, "IntegerIteral: %s", yytext);
                                yylval.code = new_code(val, 0); 
                                yylval.code->line = yylineno;
                                return IntegerIteral; 
                              }
"0"([0-8])*                   { 
                                char *val = (char*)malloc(strlen("IntegerIteral: ")+strlen(yytext)+10);
                                sprintf(val, "IntegerIteral: %s", yytext);
                                yylval.code = new_code(val, 0); 
                                yylval.code->line = yylineno;
                                return IntegerIteral; 
                              }

"&&"  { return And; }
"."   { return '.'; }
"="   { return '='; }
"+"   { return '+'; }
"-"   { return '-'; }
"*"   { return '*'; }
"<"   { return '<'; }
"!"   { return '!'; }

"{"   { return Lbrace; }
"}"   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Rbrace; }
"["   { return Laccess; }
"]"   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Raccess; }
"("   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return LBracket; }
")"   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return RBracket; }
";"   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Semicolon; }
","   { yylval.code = new_code(yytext, 0); yylval.code->line = yylineno; return Comma; }

"//".*"\n"         { yylineno++; }
"/*"(.|"\n")*"*\\" { yylineno++; }
" "|"\t"|"\r"      { /*do nothing*/ }
"\n"               { yylineno++; }
.                  { fprintf(stderr, "Not Recognized(word)"); }

%%

int yywrap(){}
int main()

{

  yylex();

}
