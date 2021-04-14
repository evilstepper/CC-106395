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

## Rules For Code:

1.	"+"|"-"|"*"|"/" {printf("\n %d The  Operators are:%s",OP,yytext);}
2.	"<"|">"|"=="|"!=" {printf("\n %d After Comparision Operators:%s",OP,yytext);}
3.	"=" {printf("\n %d operator Assignment is :%s",OP,yytext);}
4.	"&&"|"||" {printf("\n %d The Logical Operators are:%s",OP,yytext);}
5.	[0-9]* {printf("\n %d The Digits:%s",Number,yytext);}
6.	[a-zA-Z] {printf("\n %d The Letters:%s",String,yytext);}
7.	"."|";"|"," {printf("\n %d ThePunctuations:%s",Punctuation,yytext);}
8.	int|void|boolean|double|float {printf("\n %d Keywords Are:%s",Keyword,yytext);}
9.	[ |\n|\t|" "] {printf("\n %d The Whitespaces Are:%s",Spaces,yytext);}
10.	"("|")"|"["|"]"|"{"|"}" {printf("\n %d Brackets we have :%s",Bracket,yytext);}
11.	"/"[a-zA-Z0-9!@#.,:$%^&()_+]|"/"[a-zA-Z0-9!@#$%^&()_+]"/" {printf("\n %d Comment Done:%s",Comment,yytext);}
12.	"System.out.println"|"System.out.print" {printf("\n %d the Printed statement are:%s",Print,yytext);}
13.	 "class" {printf("\n %d Starting of the program:%s",Program,yytext);}
14.	main {printf("\n %d Classes name:%s",Program,yytext);}
15.	private|static {printf("\n %d Specifiers we have:%s",Specifier,yytext);}
16.	if|else {printf("\n %d The Loops are:%s",Keyword,yytext);}
17.	void|int {printf("\n %d the Return type we have:%s",Keyword,yytext);}
18.	[a-zA-Z]+[_a-zA-Z0-9]* {printf("\n %d Variable We have:%s",ID,yytext);}
19.	null|return|this|new|true|false {printf("\n %d The Reserved Keywords we Have:%s",Keyword,yytext);}



# PROGRAM:

    int main()

    {

      yylex();

    }
