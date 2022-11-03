#ifndef _dog_h_
#define _dog_h_

/**
 *struct dog - dog structure.
 *@name: name
 *@owner: owner
 *@age: age
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 *dog - new typedef dog
 */
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
