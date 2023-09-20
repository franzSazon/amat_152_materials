/* A program that computes the average of three numbers*/
#include <stdio.h>

//Variable declaration
int score1, score2, score3, sum, average;
 
int main(){

    score1 = 95;
    score2 = 99;
    score3 = 80;

    average = (score1 + score2 + score3) / 3;

    printf("The average is: %d\n", average);

    return 0;
}