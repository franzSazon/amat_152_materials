/* A program that computes the average of three numbers*/
#include <stdio.h>

//Variable declaration
float score1, score2, score3, sum, average;
 
int main(){

    score1 = 95;
    score2 = 99;
    score3 = 80;

    average = (score1 + score2 + score3) / 3;

    printf("The average is: %f\n", average);

    return 0;
}