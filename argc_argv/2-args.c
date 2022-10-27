#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - function who return each arg
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int incr;

	if (argc > 0)
	{
		for (incr = 0; incr < argc; incr++)
		{
			printf("%s\n", argv[incr]);
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
