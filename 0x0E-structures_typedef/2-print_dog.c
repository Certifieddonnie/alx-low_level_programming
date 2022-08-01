#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: Dog info
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
	else if ((*d).owner == NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
