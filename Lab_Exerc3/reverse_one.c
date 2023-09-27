#include <stdio.h>
 
int main(){

    // Declare Variables
    unsigned int num;
    int num1, num2;

    // Collect User Input
    printf("Enter a two digit number: ");
    scanf("%d", &num);

    // Handle error case
    if(num < 10 || num > 99){
        printf("Invalid input");
        return 0;
    }
    
    // Breakdown two digit number into singular digits
    num1 = num % 10;
    num2 = num / 10;

    // Breakdown two digit number into singular digits
    num1 = num % 10;
    num2 = num / 10;
    
    // Print the values in reverse order
    printf("%d", num1);
    printf("%d", num2);
    
    return 0;
}