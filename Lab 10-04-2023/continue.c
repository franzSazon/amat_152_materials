#include <stdio.h>

int main()
{
	int count, sqr;

	for (count = 0; count < 100; count++)
	{
		if (count % 7 != 0) continue;
		sqr = count * count;
		printf("Square of %d is %d\n", count, sqr);
	}

	return 0;
}