/*  
    Program to calculate the final grade

    Programmed by: Franz Jerick T. Sazon
    2023-13696
*/

#include <stdio.h>
 
int main(){

    //Declare Variables
    double num;

    // Opening Print statements
    printf("This program prints the final grade of the student\n");
    printf("Programmer: Franz Jerick T. Sazon\n"); 
    
    printf("Enter a value between 0 and 100: ");
    scanf("%lf", &num);

    // Error Handling
    if(num < 0 || num > 100){
        printf("Invalid value");
    }

    // Compare input value to range of grade and print final grade
    if(num >= 95){
        printf("Your final grade is 1.0");
    } else if(num >= 90 && num < 95){
        printf("Your final grade is 1.25");
    } else if(num >= 85 && num < 90){
        printf("Your final grade is 1.50");
    } else if(num >= 80 && num < 85){
        printf("Your final grade is 1.75");
    } else if(num >= 75 && num < 80){
        printf("Your final grade is 2.00");
    } else if(num >= 70 && num < 75){
        printf("Your final grade is 2.25");
    } else if(num >= 65 && num < 70){
        printf("Your final grade is 2.50");
    } else if(num >= 60 && num < 65){
        printf("Your final grade is 2.75");
    } else if(num >= 55 && num < 60){
        printf("Your final grade is 3.00");
    } else if(num >= 0 && num < 55){
        printf("Your final grade is 5.00");
    }
    return 0;
}