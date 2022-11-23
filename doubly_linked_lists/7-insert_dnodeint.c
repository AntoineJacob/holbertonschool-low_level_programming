#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given positi
 * @head: node
 * @idx: index of the list where the new node should be added.
 * @n: new data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *cpy = *head;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cpy;
		*head = new;
		return (new);
	}

	while (i < idx - 1)
	{
		if (cpy == NULL)
			return (NULL);
		cpy = cpy->next;
		i++;
	}
	new->next = cpy->next;
	cpy->next = new;

	return (new);
}
