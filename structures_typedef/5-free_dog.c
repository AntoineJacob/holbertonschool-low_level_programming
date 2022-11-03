#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to freeeee the dog
 * @d: dog to freeeeeeeee
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
