#include "variadic_functions.h"
#include <stdio.h>

/**
* print_c - function that print c
*@arg: arg
* Return: Return c
*/

void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* print_i - function that print i
*@arg: arg
*/

void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* print_f - function that print f
*@arg: arg
*/

void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* print_s - function that return s
*@arg: arg
*/

void print_s(va_list arg)
{
	char *str;

	str = (va_arg(arg, char *));
		if (str == NULL)
			printf("(nil)");
		printf("%s", str);
}

/**
* print_all - function that return all
*@format: format
*/

void print_all(const char * const format, ...)
{
	va_list arg;
	form typ[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0, j = 0, n = 0;

	va_start(arg, format);
	while (format && format[j])
	{
		printf(n == 1 ? ", " : "");
		n = 0;
		while (typ[i].type)
		{
			if (*(typ[i].type) == format[j])
			{
				typ[i].f(arg);
				n = 1;
			}
			i++;
		}
		i = 0;
		j++;
	}
	va_end(arg);
	printf("\n");
}
