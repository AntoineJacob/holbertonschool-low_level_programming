#include "lists.h"

/**
 * add_nodeint - function that add a node
 *@head: first node
 *@n: integrer
 *Return: return the adress of the new elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;

		*head = newNode;
	}
	return (*head);
}
