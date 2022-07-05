#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes struct
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: caregiver
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
