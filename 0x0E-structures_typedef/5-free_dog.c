#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Pointer to structure dog
 * @name
 * @owner
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);

		free(d);
	}
	else
		free(d);
}
