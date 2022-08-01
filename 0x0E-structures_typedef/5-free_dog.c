#include "dog.h"
#include <stdlib.h>

/**
 * fre_dog - Function that frees dog.
 * @d: dog info
 *
 * Return: nothing.
 */

void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}
