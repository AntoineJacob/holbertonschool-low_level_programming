#include "lists.h"

/**
 *_strlen - returns the length of a string
 *@s: is a character
 * Return: 0;
 */

int _strlen(const char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen(s + 1));
}

/**
 * add_node_end - function that adds a new node at the end
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last;
	int l;

	l = _strlen(str);
	last = *head;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;
	newNode->len = l;

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
