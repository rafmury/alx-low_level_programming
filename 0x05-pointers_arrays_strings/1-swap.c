#include "main.h"

/**
 *swap_int - swap two values
 *@a: value 1
 *@b: value 2
 *Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
