#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	FILE *fp = stdout;

	while (h)
	{
		if (!h->str)
			fprintf(fp, "[0] (nil)\n");
		else
			fprintf(fp, "[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
