#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: it separates the strings
 * @n: numbers of strings to be printed.
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list init;
	char *str;
	unsigned int i;

	va_start(init, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(init, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(init);
}
