# PROJECT-PHASE-2

# PROJECT MEMBERS:

**61827** | **Muhammad Mashood Ahmed**
  
**61819** | **Nausherwan Khan Adil**

## Rules of MiniJava for Lexical Analyzer

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

"class" {printf("\n %d Start of the program:%s",Program,yytext);}

main {printf("\n %d Name of class:%s",Program,yytext);}

"+"|"-"|"*"|"/" {printf("\n %d Operators:%s",OP,yytext);}

"<"|">"|"=="|"!=" {printf("\n %d Comparision Operators:%s",OP,yytext);}

"=" {printf("\n %d Assignment:%s",OP,yytext);}

"&&"|"||" {printf("\n %d Logical Operators:%s",OP,yytext);}

[a-zA-Z] {printf("\n %d Letters:%s",String,yytext);}

[0-9]* {printf("\n %d Digits:%s",Number,yytext);}

"("|")"|"["|"]"|"{"|"}" {printf("\n %d Brackets:%s",Bracket,yytext);}

int|void|boolean|double|float {printf("\n %d Keywords:%s",Keyword,yytext);}

"."|";"|"," {printf("\n %d Punctuations:%s",Punctuation,yytext);}

private|static {printf("\n %d Specifiers:%s",Specifier,yytext);}

if|else {printf("\n %d Loops:%s",Keyword,yytext);}

void|int {printf("\n %d Return type:%s",Keyword,yytext);}

"System.out.println"|"System.out.print" {printf("\n %d Print statement:%s",Print,yytext);}

[a-zA-Z]+[_a-zA-Z0-9]* {printf("\n %d Variable:%s",ID,yytext);}

null|return|this|new|true|false {printf("\n %d Reserved Keywords:%s",Keyword,yytext);}

do|while|switch {printf("\n %d Loop Statements:%s",Keyword,yytext);}

[ |\n|\t|" "] {printf("\n %d Whitespaces:%s",Spaces,yytext);}

"*/"

"//"[a-zA-Z0-9!@#.,:$%^&*()_+]*|"/*"[a-zA-Z0-9!@#$%^&*()_+]*"*/" {printf("\n %d Comment:%s",Comment,yytext);}

%%

# PROGRAM:

    int main()

    {

      yylex();

    }
