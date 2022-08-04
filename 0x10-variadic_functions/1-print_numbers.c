#include "variadic_functions.h"

/**
 * print_numbers - Function that prints number.
 * @separator: string printed between numbers
 * @n: number of integers to be printed.
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list init;
	unsigned int i;

	va_start(init, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(init, unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(init);

}
