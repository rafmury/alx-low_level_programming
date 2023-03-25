#include "main.h"

/**
 * print_line - Prints line
 *
 *@i: number of lines
 * Return: void
 */

void print_line(int i)
{
	int num_lines;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= i; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
