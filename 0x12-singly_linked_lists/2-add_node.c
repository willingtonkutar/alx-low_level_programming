#include "lists.h"

/**
 * add_node - add the node at the begginning
 * @head: head of the node given
 * @str: string to be stored
 * Return: address of new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int m, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (m = 0 ; str[m] != '\0' ; m++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
