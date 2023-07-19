#ifndef DOG_H
#define DOG_H

/**
 * struct dog - class for a dog
 * @name: name of dag
 * @age: age of dog
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog struct (typedef)
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
