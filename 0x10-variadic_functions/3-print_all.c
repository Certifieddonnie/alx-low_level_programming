#include "variadic_functions.h"

/**
 * print_char - function to print char
 * @init: char to be printed.
 *
 */
void print_char(va_list init)
{
	char letter;

	letter = va_arg(init, int);
	printf("%c", letter);
}

/**
 * print_int - Function to print int
 * @init: int to be printed.
 *
 */
void print_int(va_list init)
{
	int number;

	number = va_arg(init, int);
	printf("%d", number);
}

/**
 * print_float - Function to print float
 * @init: float to be printed.
 *
 */
void print_float(va_list init)
{
	float number;

	number = va_arg(init, double);
	printf("%f", number);
}

/**
 * print_string - Function to print string
 * @init: string to be printed
 *
 */
void print_string(va_list init)
{
	char *str;

	str = va_arg(init, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - Function that prints anything
 * @format: list of type of arguments.
 *
 */
void print_all(const char * const format, ...)
{
	va_list init;
	int i = 0, j = 0;
	char *separator = "";
	formats_t fun[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(init, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(fun[j].signs)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			fun[j].print(init);
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(init);
}
