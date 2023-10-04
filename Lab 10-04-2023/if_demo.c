/* 
    Program written by Franz Jerick T. Sazon 

    A program that demonstrates the if structure
*/

#include <stdio.h>
 
int main(){

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Integer is positive.\n");
        return 0;
    } else if(n < 0){
        printf("Integer is negative.\n");
    } else{
        printf("Integer is equal to 0.\n");
        return 0;
    }
    
    return 0;
}