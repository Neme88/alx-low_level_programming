#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Prints all the elements in a listint_t list.
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes in a list.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
