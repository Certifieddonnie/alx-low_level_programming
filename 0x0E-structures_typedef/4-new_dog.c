#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Information of a new dog
 * @name: dog name
 * @age: dog's age
 * @owner: owner of dog.
 *
 * Return: success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;
	return (dog);
}
