%{
#include<stdio.h>
#define OP 1
#define ID 2
#define Number 3
#define String 4
#define Punctuation 5
#define Keyword 6
#define Spaces 7
#define Bracket 8
#define Comment 9
#define Print 10
#define Program 11
#define Specifier 12

%}

%%
"class" {printf("\n %d Starting of the program:%s",Program,yytext);}
main {printf("\n %d Classes name:%s",Program,yytext);}
"+"|"-"|"*"|"/" {printf("\n %d The  Operators are:%s",OP,yytext);}
"<"|">"|"=="|"!=" {printf("\n %d After Comparision Operators:%s",OP,yytext);}
"=" {printf("\n %d operator Assignment is :%s",OP,yytext);}
"&&"|"||" {printf("\n %d The Logical Operators are:%s",OP,yytext);}
[0-9]* {printf("\n %d The Digits:%s",Number,yytext);}
[a-zA-Z] {printf("\n %d The Letters:%s",String,yytext);}
"."|";"|"," {printf("\n %d ThePunctuations:%s",Punctuation,yytext);}
int|void|boolean|double|float {printf("\n %d Keywords Are:%s",Keyword,yytext);}
[ |\n|\t|" "] {printf("\n %d The Whitespaces Are:%s",Spaces,yytext);}
"("|")"|"["|"]"|"{"|"}" {printf("\n %d Brackets we have :%s",Bracket,yytext);}
"*/"

"/"[a-zA-Z0-9!@#.,:$%^&()_+]|"/"[a-zA-Z0-9!@#$%^&()_+]"/" {printf("\n %d Comment Done:%s",Comment,yytext);}
"System.out.println"|"System.out.print" {printf("\n %d the Printed statement are:%s",Print,yytext);}
private|static {printf("\n %d Specifiers we have:%s",Specifier,yytext);}
if|else {printf("\n %d The Loops are:%s",Keyword,yytext);}
[a-zA-Z]+[_a-zA-Z0-9]* {printf("\n %d Variable We have:%s",ID,yytext);}

%%
int yywrap(){}
int main()

{

  yylex();

}
