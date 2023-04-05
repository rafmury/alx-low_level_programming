#include "main.h"

/**
 * _pow_recursion - Returns the value of p raised to the power of q
 * @p: value to raise
 * @q: power
 *
 * Return: result of the power
 */
int _pow_recursion(int p, int q)
{
	if (q < 0)
		return (-1);
	if (q == 0)
		return (1);
	return (p * _pow_recursion(p, q - 1));
}
