#include "function_pointers.h"

/**
 * int_index - function who searches for an integer
 * @array: the array to check
 * @size: the size of the array
 * @cmp: function pointer
 * Return: -1 / tab
 */

 int int_index(int *array, int size, int (*cmp)(int))
{
	int tab;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (tab = 0; tab < size; tab++)
		if (cmp(array[tab]))
			return (tab);
	return (-1);
}
