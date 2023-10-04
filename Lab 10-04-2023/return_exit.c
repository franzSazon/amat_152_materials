#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x = 0;
	
	printf("Enter a number: ");5
	scanf("%d", &x);
	
	if (x < 1) 
//		return 0;
		exit(1);
	
	printf("\nSquare of %d is %d", x, x*x);
	printf("\nThat's all. Thank you!");
	
	return 0;
}
