#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguements
 * @argc: argument cunts
 * @argv: arguments string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
