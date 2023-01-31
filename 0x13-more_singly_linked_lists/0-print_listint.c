#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
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
