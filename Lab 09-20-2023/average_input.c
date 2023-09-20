/* A program that computes the average of three numbers*/
#include <stdio.h>

//Variable declaration
// float score1 = 90, score2 = 95, score3 = 80, sum, average;
float score1, score2, score3, sum, average;
 
int main(){

    printf("This program computes the average of three numbers\n");

    printf("Enter the first number: ");
    scanf("%f", &score1);

    printf("Enter the second number: ");
    scanf("%f", &score2);

    printf("Enter the third number: ");
    scanf("%f", &score3);

    average = (score1 + score2 + score3) / 3;

    printf("The average is: %f\n", average);

    return 0;
}