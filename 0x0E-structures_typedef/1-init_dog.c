#include "dog.h"

/**
 * init_dog - Write a function that initialize a variable of type struct dog
 * @d: structure the dog
 * @name:  name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
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
