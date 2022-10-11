#include "dog.h"

/**
 * free_dog - program to free structs
 * @d: struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);

		free(d);
	}
}
