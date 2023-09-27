/*
    #Program Control Statements

    •Sequence
        -Instructions are executed in sequential order

    •Selection
        -Selects a group of statements based on a given condtition
            Ex. if(expression){
                    statement to be executed;
                } else if (expression2){
                    statement to be executed based on another expression;
                } else{
                    statement to be executed when all other conditions are false;
                }

        -If...else statements are commonly used.

        Switch statements evaluates a given expression and based on the evaluated value(matching a certain condition).
        Good alternative for a long else if ladder.
        
            Ex. switch(expression){
                    case value1:
                        statement to be executed;
                        break;
                    case value2:
                        statement to be executed;
                        break;
                    default:
                        statement to be executed;
                        break;
                }

    •Repetition
        -Repeats a group of statements through loops
        Ex.
        While loops are used for times when we don't know how many times the loop should run.

            do{
                statement to be executed;
            }while(expression);             //While loop example

        For loops are used for fixed number of times, these are used when the programmer knows how many times the loop should run.

            for( initializationStatement; expressionEvaluator; updateStatement){
                statement to be executed;
            }                               //For loop example

*/

#include <stdio.h>
 
int main(){
    int count = 1;
    while (count <= 10)
    {
        printf("%d\n", count);
        count++;
    }
    
    
    return 0;
}