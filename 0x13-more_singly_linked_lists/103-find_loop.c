#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: If there is no loop, NULL.
 *         Otherwise, a pointer to the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
