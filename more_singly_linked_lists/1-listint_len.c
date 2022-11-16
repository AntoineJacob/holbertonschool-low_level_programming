#include "lists.h"

/**
 *listint_len - function that print the length of the linked list
 *@h: head, first node
 *Return: return the length of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
