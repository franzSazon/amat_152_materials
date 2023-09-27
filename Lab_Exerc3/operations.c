#include <stdio.h>
 
int main(){

    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num2 - num1);
    printf("Product: %d\n", num1 * num2);
    printf("Quotient: %d\n", num2 / num1);
    
    return 0;
}