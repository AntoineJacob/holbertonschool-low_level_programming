#include "function_pointers.h"

/**
 * array_iterator - function
 * @array: array
 * @size: size of array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t i = 0;

	if (array == NULL || size == NULL)
	{
		return;
	}

	while (i < size);
	{
		i++;
		action(array[i]);
	}
}
