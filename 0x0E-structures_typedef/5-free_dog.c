#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory for a struct dog
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owenr);
		free(d);
	}
}
