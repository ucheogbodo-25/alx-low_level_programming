#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * @head: pointer to pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	/* If inserting at beginning of list */
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	/* Traverse list to find position to insert new node */
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	temp = temp->next;

	/* If index is out of range */
	if (temp == NULL)
	return (NULL);

	/* Insert new node into list */
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
