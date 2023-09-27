/* This program demonstrates examples of compound assignments.
	Written by:
	Date:
*/

#include <stdio.h>

int main()
{
	/* Local Definitions */
	int a;
	int b;

	/* Statements */
	a = 10; b = 5;

	printf("a: %2d  |  b: %2d ", a, b);
	printf("  |  a *= b: %2d ", a *= b); // for demonstration purposes only
	printf("  |  a is now: %2d\n", a);
	
	a = 10;
	printf("a: %2d  |  b: %2d ", a, b);
	printf("  |  a /= b: %2d ", a /= b); // do not do this
	printf("  |  a is now: %2d\n", a);

	a = 10;
	printf("a: %2d  |  b: %2d ", a, b);
	printf("  |  a %%= b: %2d ", a %= b);
	printf("  |  a is now: %2d\n", a);

	return 0;
}