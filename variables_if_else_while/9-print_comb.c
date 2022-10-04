#include <stdio.h>

/**
 * Main - Prints digits with , and space.
 *
 *Return: Return 0.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + ", ");
	}
	putchar(i);
	return (0);
}
