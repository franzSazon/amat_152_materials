/* A program that demonstrates counter-controlled loop */
#include <stdio.h>

int main ()
{
	int n, i;
	
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	// if (n>0) 
	// {
	// 	printf("\nDisplaying the integers from 1 to %d:", n);
	// 	printf("\n\nUsing for loop\n");
	// 	for (i = 1; i <= n; i++)
	// 	{
	// 		printf("%d\n", i);
	// 	}		
	// }
	// else 
	// 	printf("\nThe integer is not positive.\n");
	
    int count = 0;
    do{
        printf("%d\n", count);
        count++;
    }while(count < n);
	return 0;
}
