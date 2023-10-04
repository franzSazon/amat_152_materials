/*  
    Triangles using asterisks

    Programmed by: Franz Jerick T. Sazon
    2023-13696
*/

#include <stdio.h>
 
int main(){

    // Sloping upward to the left
    for(int i = 1; i < 10; i++){
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    // Sloping downward to the left
    for(int i = 10; i > 0; i--){
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    // Sloping downward to the right
    for(int i = 10; i >= 1; i--){
        for(int j = 0; j < 10 - i; j++){
            printf("%s", " ");
        }
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    // Sloping upward to the right
    for(int i = 1; i < 10; i++){
        for(int j = 0; j < 10 - i; j++){
            printf("%s", " ");
        }
        for(int j = 1; j <= i; j++){
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");




    return 0;
}