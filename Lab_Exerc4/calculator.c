/*  
    Simple calculator

    Programmed by: Franz Jerick T. Sazon
    2023-13696
*/

#include <stdio.h>
 
int main(){

    // Declare Variables
    float num1, num2;
    int chosenOperation;

    // Opening Print statements
    printf("This program is a simple calculator\n");
    printf("Programmer: Franz Jerick T. Sazon\n");

    // Input first number and second number
    printf("Enter 1st number: ");
    scanf("%f", &num1);

    printf("Enter 2nd number: ");
    scanf("%f", &num2);

    // Display Choices
    printf("Choose operation\n");
    printf("[1] Addition\n");
    printf("[2] Subtraction\n");
    printf("[3] Multiplication\n");
    printf("[4] Division\n");

    printf("Choice: ");
    scanf("%d", &chosenOperation);

    // Evaluate the chosen operation and print the appropriate result
    switch(chosenOperation){
        case 1:
            printf("Result of adding %.2f and %.2f is %.2f\n", num1, num2, num1 + num2);
            break;

        case 2:
            printf("Result of subtracting %.2f and %.2f is %.2f\n", num1, num2, num1 - num2);
            break;
        
        case 3:
            printf("Result of multiplying %.2f and %.2f is %.2f\n", num1, num2, num1 * num2);
            break;
        
        case 4:
                if(num2 == 0){
                    printf("Result is undefined - division by 0 is encountered!\n");    // Display appropriate error handling
                    break;
                }
            printf("Result of dividing %.2f and %.2f is %.2f\n", num1, num2, num1/num2);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}