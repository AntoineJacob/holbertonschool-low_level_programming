#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Print the number of arg
 * @argc: argc
 * @argv: argv
 * Return: Return 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
