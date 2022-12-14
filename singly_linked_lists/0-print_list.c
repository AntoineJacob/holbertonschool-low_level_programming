#include "lists.h"

/**
 * print_list - function that prints all the elements of a list
 * @h: linked list data structure header
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t number;

	number = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		number++;
		h = h->next;
	}
	return (number);
}
