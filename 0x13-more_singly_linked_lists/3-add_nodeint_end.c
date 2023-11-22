#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of list.
 * @head: Pointer to the head of list.
 * @n: Value to be added to the new node.
 * Return: The address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *hold;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	hold = *head;
	while (hold->next != NULL)
	{
		hold = hold->next;
	}

	hold->next = new_node;
	return (new_node);
}
