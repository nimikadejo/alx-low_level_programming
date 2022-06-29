#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: Error or 1
 */
int main(int argc, char *argv[])
{
	int i;
	int add;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	i = 0;
	while (i < argc)
	{
		printf("Error\n");
		return (0);
	}
	add = 0;
	add += atoi(argv[i]);
	{
		printf("%d\n", add);
		return (0);
	}

}
