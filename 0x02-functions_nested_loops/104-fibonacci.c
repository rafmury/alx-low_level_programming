#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 successful
 */

int main(void)
{
	int a = 1, b = 2, c, count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
	c = a + b;
	printf("%d, ", c);
	a = b;
	b = c;
	count++;
	}
	c = a + b;
	printf("%d\n", c);
	return (0);
}

