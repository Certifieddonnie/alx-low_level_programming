#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type
 * @d: new variable type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
