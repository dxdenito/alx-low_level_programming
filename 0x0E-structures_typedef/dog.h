#ifndef DOG_H
#define DOG_H

/**
 * struct dog - to show attributes of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: this is a structure to be a ble to store attributes of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#include <stdlib.h>

#include <stdio.h>

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
