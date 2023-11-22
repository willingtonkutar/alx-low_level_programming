#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0
 * Return: The nth node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;
	listint_t *current = head;

	for (j = 0; current != NULL && j < index; j++)
	{
		current = current->next;
	}

	if (j < index)
		return (NULL);
	return (current);
}
