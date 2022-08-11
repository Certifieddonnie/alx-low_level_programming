#include <stdio.h> 

/**
 * before_main - Function that is executed before main function.
 * Return: nothing
 */

void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
