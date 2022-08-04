#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct formats - List of data types arguments.
 *
 * @signs: format symbols
 * @print:  a function pointer that prints the format type.
 */
typedef struct formats
{
	char *signs;
	void (*print)(va_list init);
} formats_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
