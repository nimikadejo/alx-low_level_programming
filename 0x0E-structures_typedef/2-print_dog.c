#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - initializes struct
 * @d: pointer
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name == 0)
			printf("Name: %s\n", "(nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: %s\n", "(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("Owner: %s\n", "(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
