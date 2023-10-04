/*  
    Program to Count the Numbers fom 1 to M that are divisible by N

    Programmed by: Franz Jerick T. Sazon
    2023-13696
*/
#include <stdio.h>
 
int main(){

    // Declare Variables
    int M, N;
    int count = 0;

    // Display program description
    printf("Program to Count the Numbers fom 1 to M that are divisible by N\n");

    // Handle User input for M
    printf("Enter M (>1): ");
    scanf("%d", &M);

    // Check if M is valid
    if(M < 1){
        printf("You have entered an invalid input. Program will now terminate.\n");
        return 0;
    }

    // Handle User input for N
    printf("Enter N (>1): ");
    scanf("%d", &N);

    // Check if N is valid
    if(N < 1){
        printf("You have entered an invalid input. Program will now terminate.\n");
        return 0;
    }

    // Count the number of divisible numbers through modulus operation
    for(int i = 1; i <= M; i++){
        if(i % N == 0){
            count++;
        }
    }

    // Display case where there is no divisible numbers
    if(count == 0){
        printf("There are no numbers from 1 to %d that are divisible by %d", M, N);
        return 0;
    }

    // Display final result if there are divisible numbers
    printf("There are %d numbers from 1 to %d that are divisible by %d", count, M, N);
    
    return 0;
}