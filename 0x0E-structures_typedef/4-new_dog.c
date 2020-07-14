#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - check the code for Holberton School students.
 * @name : pointer struct
 * @age : pointer struct
 * @owner : pointer struct
 * Return: nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *DogJr = NULL;

	DogJr = malloc(sizeof(dog_t));
	if (DogJr == NULL)
	{
		free(DogJr);
	}
	DogJr->name = _strcopy(name);
	if (!DogJr->name)
	{
		free(DogJr);
	}
	DogJr->age = age;
	DogJr->owner = _strcopy(owner);
	if (!DogJr->owner)
	{
		free(DogJr->name);
		free(DogJr);
	}
	return (DogJr);

}

/**
 * _strcopy - check the code for Holberton School students.
 * @s : pointer struct
 * Return: nothing.
 */
char *_strcopy(char *s)
{
	int i = 0;
	char *p;

	if (s == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		i++;
	}
	p = malloc(i + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (s);
}
