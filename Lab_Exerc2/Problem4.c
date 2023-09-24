// Demonstrates formatted output

#include <stdio.h>
 
int main() {

    float sampleFloat = 1234567.7654321;
    int sampleInt     = 1234567;
    char sampleChar[] = "Is it too late now to say sorry?";

    // Print sampleFloat using a field width of 10 and a precision of 4 fixed points
    printf("Sample float: %10.4f\n", sampleFloat);

    // Question 3
    printf("%%.10d : %.10d.\n", sampleInt);

    // Question 4
    printf("%%.3s : %.3s.\n", sampleChar);
    
    return 0;
}   