/* This program demonstrates side effects */
#include <stdio.h>

int main()
{
	/* Local Definitions */
	int x = 3;
	
	/* Statements demonstrating side effects */
	
	// The expression x evaluates to 3 - the value assigned to c upon initialization.
	printf("Step 1--Value of x: %d\n", x);
	
	// The expression at the right of the assignment operator
	// evaluates to 7. 	C will then assign the value 7 to x 
	// (right side of the assignment). The whole expression then evaluates to 7.
	printf("Step 2--Value of x = x + 4: %d\n", x = x + 4);
	printf("Step 3--Value of x now: %d\n", x);
	
	return 0;
}
