# PROJECT-PHASE-1

# PROJECT MEMBERS:

**61827** | **Muhammad Mashood Ahmed**
  
**61819** | **Nausherwan Khan Adil**
  
 ## Language:
 The language that we have selected for compiler is “Mini Java”.

# Something about Mini Java:
Mini-Java is a subset of Java which has been simplified (and modified). A MiniJava programs purpose is determined by its meaning as a Java program. Every MiniJava program is a fully functional Java program that follows Java semantics. It supports classes and limited inheritance, simple data types and a few structured control constructors. The MiniJava software is a single file that does not have a package declaration (and therefore does not correspond to the default package) or imports. It is made up of one or more Java classes. The classes are simple and easy there are no interface classes, subclasses, or nested classes in it.
In MiniJava fields and methods are the members of a class. Public or private access may be defined in member declarations, as well as static instantiation. An initializing expression cannot be used in the declaration of a field. A parameter list and a body are also present in methods. There aren't any constructor methods available. MiniJava has three types: primitive types, class types, and array types. The primitive types are void, int, and Boolean, and the array types are the integer array int [] and the class [] array, where class can be any class type.

# Mini Java Constructor:

# Simple Program on Mini Java:
 
     class SimpleProgram 
      {
  
       public static void main(String[] a)   
       {
       
       System.out.println(“hello this is my test program for project phse 1");
             
       }  
       
     }
   
# if/else loop in Mini Java:
     class Factorial_ifelse 
     {
        public int calculate_Factorial(int number)
        {
            int number1;
            if (number < 1) number1= 1;
            else number1 = number * (this.calculate_Factorial(number-1));
            return number1;
        }
    }
    
     class Factorial_program
     {
        public static void main(String[] a)
        {
             System.out.println(new Factorial_ifelse().calculate_Factorial(8));
        }

# Array Declaration in Mini Java:
     class MiniJava_Arrays 
     {
        public static void main(String[] a)
        {
            System.out.println(new ppClass().calc());
        }
    }
    
    class ppClass
    {
        int [] b;    
        public int calc()
        {
            int [] a;    
            b = new int [35];
            a = new int [64];
            a[0] = 8;
            a[2] = 66;
            b[45] = 65;
            return a[0] + b[a[2]-9];
        }
    }

# Mini Java Lexical Specifications:
lexical elements found in mini java are as follows.

• Identifier:

An identifier is a string of letters, underscores, and digits that begins with an underscore or a letter and continues with any number of letters, underscores, or digits. Only the letters A to Z and a to z are permitted, with case being crucial. IDENTs are not keywords.

• Keywords and operators:

In the grammar classification, all tokens in bold are keywords or operators. Main, String, System, Out, and Println are all exceptions. They are not keywords, but rather identifiers.

• White Spaces:

Space, new line, carriage return, and tabulator are examples of white space.

• Integer Literals:

A numeric integer literal is a digit sequence that starts with any digit from 1 to 9 and ends with any number of digits from 0 to 9. A single 0 can be used as an integer literal as well.

• Comments:

A comment is described as the string /* followed by any characters until the terminating /. Comments cannot be nested, and any subsequent / inside a comment would be ignored; a comment will always end when the first */ is detected.

# CFG of  Mini Java:

• Productions A → α, A → β... abbreviated as A → α | β |...

• N, the sequence of non-terminals (A, B, C... ∈). The start symbol is a non-terminal in the grammar.

• T stands for the collection of tokens, also known as terminals.

• A Context Free Grammar is a set of A -> X1X2... Xn (n 0) productions. If n is equal to 0, we can write either A-> or A -> ∈.

