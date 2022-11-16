#include "lists.h"

/**
 *print_listint - function that print a list
 *@h: header, first node
 *Return: Return the number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
