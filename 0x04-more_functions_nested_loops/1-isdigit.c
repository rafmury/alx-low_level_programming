#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The number to be checked
 * Return: 1 for a digit or 0 for otherwise
 */

int _isdigit(int c)

{
	if (c >= 40 && c <= 57)
	{
	return (1);
	}
	return (0);
}
