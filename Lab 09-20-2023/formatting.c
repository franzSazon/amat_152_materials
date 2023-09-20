#include <stdio.h>

int num = 12345;
long l_num = 12345;
float flt = 1.2345;
double l_flt = 1.2345;

int main(){

    printf("%d %f\n", num, flt);
    printf("%ld %lf\n", l_num, l_flt);

    printf("%d \t%5d \n%d \t%5d \n%d \t%5d \n%d \t%5d \n", 12, 12, 123, 123, 1234, 1234, 12345, 12345);

    printf("\n");

    printf("%.2f \n%.3f \n%.4f \n%.5f \n ", 152.2356, 152.2356, 152.2356, 152.2356, 152.2356); //left justify

    printf("\n");

    printf("%10.2f \n%10.3f \n%10.4f \n%10.5f \n" ,152.2356, 152.2356, 152.2356, 152.2356, 152.2356); //right justify

    printf("\n");

    printf("%010.2f \n%010.3f \n%010.4f \n%010.5f \n" ,152.2356, 152.2356, 152.2356, 152.2356, 152.2356); //zero fill
    
    printf("\n");

    printf("%-10.2f \n%-10.3f \n%-10.4f \n%-10.5f \n" ,152.2356, 152.2356, 152.2356, 152.2356, 152.2356); //left justify

    printf("\n");

    printf("%10.2f \n%10.3f \n%10.4f \n%10.5f \n" ,152.2356, 152.2356, 152.2356, 152.2356, 152.2356); //right justify
    
    return 0;
}