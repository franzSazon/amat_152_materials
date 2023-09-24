//Program to determine the byte size of different data types in C.

#include <stdio.h>
 
int main(){

    printf("\nA char is %d bytes.", sizeof(char));
    printf("\nA short is %d bytes.", sizeof(short));
    printf("\nA int is %d bytes.", sizeof(int));
    printf("\nA long is %d bytes.", sizeof(long));
    printf("\nA float is %d bytes.", sizeof(float));
    printf("\nA double is %d bytes.", sizeof(double));
    printf("\nAn unsigned char is %d bytes.", sizeof(unsigned char));
    printf("\nAn unsigned short is %d bytes.", sizeof(unsigned short));
    printf("\nAn unsigned int is %d bytes.", sizeof(unsigned int));
    printf("\nAn unsigned long is %d bytes.", sizeof(unsigned long));

    return 0;
}