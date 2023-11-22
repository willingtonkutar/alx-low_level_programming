#include "lists.h"

/**
 * print_listsint - print th edat in singly linked list  given
 * @h: integer used
 * Return: the number of nodes given in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0 ; h != NULL ; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
