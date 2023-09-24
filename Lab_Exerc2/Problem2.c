// A program that demonstrates the use of variables and constants

#include <stdio.h>

#define GRAMS_PER_POUND 454

const int RIO_YEAR = 2016;

long weight_in_grams, weight_in_pounds;
int year_of_birth, age;

int main(){
    
    printf("Enter your weight (in grams): ");
    scanf("%ld", &weight_in_grams);

    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    weight_in_pounds = weight_in_grams / GRAMS_PER_POUND;
    age = RIO_YEAR - year_of_birth;

    printf("\n\nYour weight in pounds is %d.\n", weight_in_pounds);
    printf("Age during the RIO olympics year: %d.\n", age);

    return 0;
}
