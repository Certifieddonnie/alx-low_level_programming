#include <stdio.h>
#include <unistd.h>

void Tprint()
{

	printf("_putchar\n");

}



int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
        char c;

        for (c = 'a'; c <= 'z'; ++c)
                _putchar(c);

        _putchar('\n');
        return (0);
}

void print_alphabet_x10(void);
{
        int i;
        char c;

        for (i = 0; i < 10; ++i)
        {
                for (c = 'a'; c <= 'z'; ++c)
                        _putchar(c);
        }
        _putchar("\n");

}

