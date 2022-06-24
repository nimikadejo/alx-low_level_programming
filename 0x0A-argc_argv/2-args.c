#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguements
 * @argc: argument cunts
 * @argv: arguments string
 * Return: argv
 */
int main(int argc, char *argv[])
{
	(void) argc;
	{
	printf("%s\n", *argv);
	argv++;
	}
	return (0);
}
