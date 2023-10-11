#include "dog.h"

/**
 * init_dog - Program to initialize a dog class
 * @d: ptr to structure
 * @name: ptr to the name of the dog
 * @age: var age of dog
 * @owner: ptr to owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
