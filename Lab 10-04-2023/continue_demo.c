continue_demo.c
#include <stdio.h>

int main()
{
	int num, sum = 0;

	while (1)
	{
		printf("Enter a positive number: ");
		scanf("%d", &num);
		if (num < 1) break;
		sum = sum + num;
	}

	printf("Sum of numbers entered is %d", sum);

	return 0;
}