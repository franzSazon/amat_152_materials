#include <stdio.h>
 
int main(){

    unsigned int num;
    int num1, num2, num3;

    printf("Enter a three digit number: ");
    scanf("%d", &num);

    // Print the values in reverse order
    num1 = num % 10;
    num2 = (num / 10) % 10;
    num3 = (num / 100) % 10;

    printf("%d", num1);
    printf("%d", num2);
    printf("%d", num3);
    
    return 0;
}