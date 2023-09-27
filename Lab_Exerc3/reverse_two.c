#include <stdio.h>
 
int main(){

    // Declare Variables
    unsigned int num;
    int num1, num2, num3;

    // Collect User Input
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    // Handle error case
    if(num < 100 || num > 999){
        printf("Invalid input");
        return 0;
    }

    // Breakdown three digit number into singular digits
    num1 = num % 10;
    num2 = (num / 10) % 10;
    num3 = (num / 100) % 10;

    // Print the values in reverse order
    printf("%d", num1);
    printf("%d", num2);
    printf("%d", num3);
    
    return 0;
}