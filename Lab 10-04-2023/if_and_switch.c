/* A program that demonstrates the switch statement */
#include <stdio.h>

int main ()
{
	char n;
	
	printf("Asking in if mode\n");
	printf("Do you live in Mindanao? [Y/N]: ");
	scanf("%c", &n);
	
	if (n == 'Y' || n == 'y')
	{
		printf("\nSame!\n");
	}
	else if (n == 'N' || n == 'n')
	{
		printf("\nSee you!\n");
	}
	else
	{
		printf("\nAre you a robot?\n");
	}
	
	printf("\n\nAsking again in switch mode\n");
	printf("Do you live in Mindanao? [Y/N]: ");
	scanf(" %c", &n);
	
	switch(n)
	{
		case 'Y': case 'y':
			printf("\nSame!\n");
            break;
		case 'N': case 'n': 
			printf("\nSee you!\n");
            break;
		default: 
			printf("\nAre you a robot?\n");
            break;
	}
	
	return 0;
}