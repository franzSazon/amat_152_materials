/*
    -AMAT NOTES 20/09/2023-

    Statements, Expressions, and Operators

    Outline
        - Statement
        - Expression
        - Operator Precedence
    
    Statement
        - A statement is a complete direction instructing the computer to carrry out some task.
            * Usually written out one per line
            * Usually ends with a semicolon
            * Ex. x = 2 + 3;
            * Ex. printf("Hello World");
        
        #Statements and White space
            - Refers to tabs, spaces and blank lines of code.
            - C does not care about white spaces.
            - Whitespace has no significant effect on the program.

            Ex. printf("Hello 
            World"); //This will cause an error

            Within string literal constants, tabs and spaces are not ignored, they are part of the string.
        
        #Null (or empty) statements
            - A null statement is placing a semicolon at the end of the statement.
            - This statement contains no instructions.

        #Compound Statements
            - A compound statements a group of two or more statements enclosed in braces.
            - A compound statement is also called a block.
            Ex. {
                    printf("Hello"); printf("World");
                }
        
        #Expressions
            - In C an expression is anything that evaluates to a numeric value.
            - An expression can take a complex form.
            Ex. 1.25 * 8 + 5 * RATE / 2 *COST;

        #Assignment Operators
            - The assignment operator is used to assign a value to a variable.
            Ex. x = 2 + 3;
        
        #Mathematical Operators
            - In C, there are 2 types of mathematical operators.
                * Unary operators
                    - Unary operators are operators that operate on a single operand.
                    Ex. x++; //Increments variable by one
                        x--; //Decrements variable by one

                * Binary operators
                    - Binary operators are operators that operate on two operands.
                    Ex. x + y; //Adds x and y
                    
                    - Modulus operator gives out the remainder of a division.
                    Ex 100 % 9; //Gives out 1.
        
        #Operator Precedence and Parenthesis
            - In an expression that contains sone more than one operator, what is the order in which they are evaluated?
                -> https://en.cppreference.com/w/c/language/operator_precedence //Operator Precedence List
*/

#include <stdio.h>
 
int main(){
    
    return 0;
}