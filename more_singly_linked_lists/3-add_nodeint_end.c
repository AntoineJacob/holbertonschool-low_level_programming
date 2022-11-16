#include "lists.h"

/**
 * add_nodeint_end - function for adding a new node at the end
 *@head: header
 *@n: int
 *Return: return
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last;

	last = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	return (newNode);
}
