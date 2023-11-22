#include "lists.h"

/**
 * add_node_end - adds a node to the end of a string
 * @head: head of the node
 *@str: string used
 * Return: address of th  enew element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *hold;
	unsigned int m, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (m = 0 ; str[m] != '\0' ; m++)
		count++;
	newnode->len = count;
	newnode->next = NULL;
	hold = *head;

	if (hold == NULL)
		*head = newnode;
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		hold->next = newnode;
	}
	return (*head);
}
