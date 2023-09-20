// This program displays different variable types
#include <stdio.h>

#define e 2.71828

const float E = 2.71828;

char c = 'A';
int num = 327;
long l_num = 516123;
float flt = e;
double l_flt = 264652.456;
char sc[] = "Hello";

int main(){

    printf("%c\n", c);
    printf("%d\n", num);
    printf("%ld\n", l_num);
    printf("%f\n", flt);
    printf("%lf\n", l_flt);
    printf("%s\n", sc);
    printf("%f\n", e);

    return 0;
}