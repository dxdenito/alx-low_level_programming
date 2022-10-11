#include "dog.h"

/**
 * new_dog -  creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, z;
	struct dog *newd;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name == malloc(i * sizeof(newd->name));
	if (newd->name == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	for (z = 0; z <= i; z++)
		(*newd).name[z] = name[z];
	(*newd).age = age;
	newd->owner = malloc(j * sizeof(newd->owner));
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	for (z = 0; z <= j; z++)
		newd->owner[z] = owner[z];

	return (newd);
}
