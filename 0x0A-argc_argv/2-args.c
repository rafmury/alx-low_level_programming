#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: array count
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
