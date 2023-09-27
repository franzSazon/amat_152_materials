/* This program demonstrates precedence and associativity of operators */
#include <stdio.h>

int main()
{
	/* Local Definitions */
	int a = 10, b = 20, c = 30;
	
	/* Statements demonstrating precedence */
	printf("a *  b + c  is: %d\n", a *  b + c);
	printf("a * (b + c) is: %d\n\n", a * (b + c));
	
	/* Left Associativity */
	printf("    3 * 8 / 4  % 4  * 5  is: %d\n", 3 * 8 / 4 % 4 * 5);
	printf("((((3* 8) / 4) % 4) * 5) is: %d\n\n", ((((3* 8) / 4) % 4) * 5));
	
	/* Right Associativity */
	printf("a += b *= c -= 5               is: %d\n", a += b *= c -= 5);
	
	a = 10, b = 20, c = 30;
	printf("(a += (b *= (c -= 5)))         is: %d\n", (a += (b *= (c -= 5))));
	
	a = 10, b = 20, c = 30;
	printf("(a = a + (b = b * (c = c- 5))) is: %d\n", (a = a + (b = b * (c = c- 5))));
	
	a = b = c = 0;
	
	return 0;
}