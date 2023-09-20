#include <stdio.h>

int main(){
    
    int inputNumber;
    int resultNumber = 1;

    printf("Enter Number: ");
    scanf("%d", &inputNumber);

    if(inputNumber < 0){
        printf("Number must be non negative");
        return 0;
    }

    for(int i = inputNumber; i > 0; i--){
        resultNumber = resultNumber * inputNumber;
        inputNumber--;
    }

    printf("%d", resultNumber);

    return 0;
}