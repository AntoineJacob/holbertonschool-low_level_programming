#include "main.h"

/**
 * _puts - entry point
 *
 * @str: string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
