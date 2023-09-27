/* This program demonstrates postfix and prefix increment.
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
	a = 4; b = 4;

	/* Using postfix increment */
	printf("value of a     : %2d\n", a);
	printf("value of a++   : %2d\n", a++);
	printf("new value of a : %2d\n\n", a);
	
	/* Using prefix increment */
	printf("value of b     : %2d\n", b);
	printf("value of ++b   : %2d\n", ++b);
	printf("new value of b : %2d\n\n", b);

	return 0;
}
