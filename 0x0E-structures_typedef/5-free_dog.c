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
		if (d->name != NULL)
			free(name);
		if (d->owner != NULL)
			free(owner);

			free(d);
	}
	else
		free(d);
}
