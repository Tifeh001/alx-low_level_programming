#include <stdio.h>

/**
 * main -  entry point
 *
 *Description: print the numbers 1-100 w/
 *fizz for multiples of 3, Buss for multiples of 5,
 *and fizz buzz for multiples of both
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
