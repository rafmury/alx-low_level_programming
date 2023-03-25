#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Return: 10 times of the numbers 0 to 14
 */

void more_numbers(void)
{
	int n, x, y, z;

	for (z = 1; z <= 10; z++)
	{
		for (n = 0; n <= 14; n++)
		{
			x = n / 10;
			y = n % 10;
			if (n > 9)
				_putchar(x + '0');
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
