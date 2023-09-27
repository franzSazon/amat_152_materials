#include <stdio.h>
 
int main(){

    unsigned int num;
    int num1, num2;

    printf("Enter a two digit number: ");
    scanf("%d", &num);

    //Print the values in reverse order

    num1 = num % 10;
    num2 = num / 10;
    
    printf("%d", num1);
    printf("%d", num2);
    
    return 0;
}