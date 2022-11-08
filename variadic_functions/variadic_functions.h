#ifndef _variadic_functions_h_
#define _variadic_functions_h_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);

typedef struct form
{
	char * format;
	void (*f)(va_list);
} format;

#endif
