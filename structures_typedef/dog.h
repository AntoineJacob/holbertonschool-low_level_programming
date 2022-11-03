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
 *dog_t - new typedef dog_t
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
