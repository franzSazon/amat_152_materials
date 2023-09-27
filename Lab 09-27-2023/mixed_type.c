/* A Program that demonstrates automatic promotion of numeric data types */
#include <stdio.h>

int main()
{
	// Local Definitions
	char aChar = 'A';
	int intNum = 200;
	double fltNum = 245.3;
	
	// Statements
	printf("aChar contains  : %c\n", aChar);
	printf("aChar numeric   : %d\n", aChar);
	printf("intNum contains : %d\n", intNum);
	printf("fltNum contains : %lf\n", fltNum);
	
	// in this statement, aChar is promoted
	intNum = intNum + aChar;
	
	// in this statement, aChar is promoted
	fltNum = fltNum + aChar;
	
	// After addition
	printf("aChar numeric   : %d\n", aChar);
	printf("intNum contains : %d\n", intNum);
	printf("fltNum contains : %lf\n", fltNum);
	
	intNum = fltNum + intNum;
	printf("aChar numeric   : %d\n", aChar);
	printf("intNum contains : %d\n", intNum);
	printf("fltNum contains : %lf\n", fltNum);
	
	
	return 0;
}