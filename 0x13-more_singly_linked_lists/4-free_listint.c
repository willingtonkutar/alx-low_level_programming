#include "lists.h"

/**
 * free_listint - Frees a listint_t list that is givenn.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
