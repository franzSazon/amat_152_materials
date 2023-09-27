#include <stdio.h>
 
int main(){

    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, firstsum, secondsum, total, upc;

    printf("Enter the upc code digit: ");
    scanf("%d", &upc);

    d = upc % 10;
    i1 = upc / 10000 % 10;
    i2 = upc / 1000 % 10;
    i3 = upc / 100 % 10;
    i4 = upc / 10 % 10;
    i5 = upc / 1 % 10;
    j1 = upc / 100000 % 10;
    j2 = upc / 10000 % 10;
    j3 = upc / 1000 % 10;
    j4 = upc / 100 % 10;
    j5 = upc / 10 % 10;

    firstsum = d + i2 + i4 + j1 + j3 + j5;
    secondsum = i1 + i3 + i5 + j2 + j4 + j5;
    total = firstsum*3 + secondsum;
    total = total -1;
    total = total % 10;
    total = 9 - total;

    printf("\nThe check digit code is: %d", total);

    return 0;
}