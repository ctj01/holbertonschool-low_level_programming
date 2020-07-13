#ifndef DOG_H
#define DOG_H

/**
 * struct dog - input
 * @name: name of the dog
 * @age: dog's age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif