#include "lists.h"

/**
 *_strlen - return the length of a string
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
 * add_node - function that adds a new node
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len;

	len = _strlen(str);

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = *head;
	newNode->len = len;

	*head = newNode;

	return (*head);
}
