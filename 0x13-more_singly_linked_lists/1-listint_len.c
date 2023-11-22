#include "lists.h"

/**
 * listint_len - counts the number of elementsin a given list
 * @h: pointer to the head
 * Return: number of elements in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0 ; h != NULL ; count++)
	{
		h = h->next;
	}
	return (count);
}
