#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(*new));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	for (; *head != NULL; head = &(*head)->next)
		;

	return ((*head = new), new);
}
