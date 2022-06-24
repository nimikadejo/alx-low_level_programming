#include <stdio.h>
#include "main.h"

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: argument string
 * Return: argc
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
