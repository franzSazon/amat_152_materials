#include <stdio.h>

int main(){

    int password = 1234;
    int userInput;

    do {

        printf("Enter password: ");
        scanf("%d", &userInput);

        printf("%d\n", userInput);

        if (userInput == password)
        {
            printf("Correct Password!");
            return 0;
        } else{
            printf("Wrong Password, please try again! \n");
        }
        
    } while(userInput != password);
    
    return 0;
}