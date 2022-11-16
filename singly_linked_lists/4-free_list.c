#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: linked list data structure header
 */

void free_list(list_t *head)
{
	list_t *list;
	list = head;

	while (head != NULL)
	{
		head = head->next;
		free(list->str);
	}
	free(head);
}
