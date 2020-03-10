#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a structure 'dog'
 * @d: Pointer to structure dog
 * @name
 * @age
 * @owner
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)");
		else
			printf("Name: %s\n", d->name);
		if (d->age == 0.0)
			printf("(nil)");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
