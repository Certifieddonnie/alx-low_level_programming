#include <stdio.h>
#include <wchar.h>
#include <stddef.h>

/**
 * main - Entry Point
 * Description: it prints the word
 * Return: Always the value 1 (Success)
 */

int main(void)
{
	wchar_t str[] = L"and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	wprintf(L"%ls\n", str);
	return (0);
}
