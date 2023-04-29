#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	/* Initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty, new node is head */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	/* Find last node in list */
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	/* Add new node to end of list */
	temp->next = new_node;

	return (new_node);
}
