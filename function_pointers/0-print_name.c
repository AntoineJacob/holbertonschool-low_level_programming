#include "function_pointers.h"

/**
* print_name - Function who print name
* f: pointer function
* name: name to putchar
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;
	(f*)(name);
}
