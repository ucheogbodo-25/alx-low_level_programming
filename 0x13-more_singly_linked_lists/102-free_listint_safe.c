#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	return (count);

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
	next = current->next;
	free(current);
	count++;

	if (next >= current)
		break;

	current = next;
	}

	return (count);
}
