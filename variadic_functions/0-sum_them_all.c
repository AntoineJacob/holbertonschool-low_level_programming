#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all his parameters
 * @n: parameters
 * Return: sum of all parameters or 0 if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
