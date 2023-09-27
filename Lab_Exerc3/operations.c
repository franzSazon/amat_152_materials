#include <stdio.h>

int main(){

    // Declare Variables
    double num1, num2;

    // Collect User Input
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Do operations and print result
    printf("Sum: %lf + %lf = %lf\n", num1, num2, num1 + num2);
    printf("Difference: %lf - %lf = %lf\n", num2, num1, num2 - num1);
    printf("Product: %lf * %lf = %lf\n", num1, num2, num1 * num2);
    printf("Quotient: %lf / %lf = %lf\n", num2, num1, num2 / num1);

    return 0;
}