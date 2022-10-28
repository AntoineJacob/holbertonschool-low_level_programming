#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fuction
 * @size: size
 * @c: c
 * Return: 0 if NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *pa;

	pa = malloc(size * sizeof(char));
	if (size == 0 || pa == NULL)
		return (NULL);
	while (i < size)
	{
		pa[i] = c;
		i++;
	}
	return (pa);
}
