#include "function_pointers.h"

/**
 * print_name - function that print name
* @name: name to print
* @f: pointer on function
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
