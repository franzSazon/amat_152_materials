/* A program that demonstrates event-controlled loop */
#include <stdio.h>

int main ()
{
	int n = 1, d = 0;
	
	/* Using sentinel-controlled loop */
	printf("Using sentinel-controlled loop\n");

	printf("Enter an integer: ");
	scanf("%d", &n);

	while (n != 0)
	{
		printf("The square of %d is %d.\n", n, n*n);
		printf("Enter an integer: ");
		scanf("%d", &n);	
	}

	printf("A value of 0 is entered.");
	
	/* Using flag-controlled loop */
	printf("\n\nUsing flag-controlled loop\n");
	
	while (d == 0)
	{
		printf("Enter an integer: ");
		scanf("%d", &n);
		
		if(n <= 0){
			d = 1;
		}
		else{
			if (n % 2 == 0){
				printf("%d is an even number.\n", n);
			}
		}
	}
	
	printf("A non-positive value is entered.\n");
		
	
	return 0;
}