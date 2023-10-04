/* A program that demonstrates the dangling else */
#include <stdio.h>

int main ()
{
	int n;
	
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	if (n >= 0)
		if (n > 0)
			printf("\nThe integer is positive.\n");
	else
		printf("\nThe integer is negative.\n");
	
	return 0;
}