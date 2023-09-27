/* 
    This program demonstrates binary expression
    Written by: Franz Jerick T. Sazon
    Date: September 27, 2023 
*/

#include <stdio.h>
 
int main(){
    
    // Local Definitions
    int a = 17, b = 5, res1;
    float c = 3.0, d = 5.2;

    // Printf statements
    res1 = a + b;
    printf("%d + %d = %d\n", a, b, res1);

    res1 = a - b;
    printf("%d - %d = %d\n", a, b, res1);

    res1 = a * b;
    printf("%d * %d = %d\n", a, b, res1);

    res1 = a / b;
    printf("%d / %d = %d\n", a, b, res1);

    res1 = a % b;
    printf("%d %% %d = %d\n", a, b, res1);

    // Another block of Printf Statements
    printf("%f + %f = %f\n", c, d, c + d);
    printf("%f - %f = %f\n", c, d, c - d);
    printf("%f * %f = %f\n", c, d, c * d);
    printf("%f / %f = %f\n", c, d, c / d);
    // printf("%f %% %f = %f\n", c, d, c % d); only ints for modulo

    // Another block of statements
    printf("%f / %d = %f\n", c, b, c / b);
    printf("%d / %f = %f\n", a, d, a / d);
    printf("%d %% %d = %d\n", b, a, b % a);

    return 0;
}