#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: linked list data structure header
 */

void free_listint(listint_t *head)
{
	listint_t *f;

	f = head;
	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}
	free(head);
}
