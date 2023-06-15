#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
