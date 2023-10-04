#include <stdio.h>
 
int main(){

    for ( ; ; ){
        printf("Empty condition?!\n");
    }
    
    return 0;

    while(10){
        printf("This is an infinite loop\n");
    }

    return 0;

    int x;
    x = 0;
    while(1){
        printf("Condition is 1...\n");
        if(x==1) break;
    }
}