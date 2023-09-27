/* Program demonstrating how expressions are evaluated */
#include <stdio.h>

int main()
{
	// Local Definitions
	int a = 3, b = 4, c = 5, x, y;
	
	// Statements
	printf("Initial values of the variable: \n");
	printf("a = %d\tb = %d\tc = %d\n\n", a, b, c);
	
	x = a * 4 + b / 2 - c * b;
	printf("Value of a * 4 + b / 2 - c * b: %d \n", x);
	
	y = --a * (3 + b) / 2 - c++ * b;
	printf("Value of --a * (3 + b) / 2 - c++ * b: %d\n", y);
	
	printf("\nValues of the variables are now: \n");
	printf("a = %d\tb = %d\tc = %d\n\n", a, b, c);
	
	printf("\n\nValue of a++ - a++ : %d\n", a++ - a++);
    
		
	return 0;
}