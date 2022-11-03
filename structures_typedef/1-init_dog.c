#include <stdio.h>
#include "dog.h"

/**
 *init_dog - function to initialize dog
 *@name: name
 *@age: age
 *@owner: owner
 *@d: carac of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
