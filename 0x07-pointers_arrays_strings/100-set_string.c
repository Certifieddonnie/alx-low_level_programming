#include "main.h"

/**
 * set_string - Function to set the value of a pointer to a char
 * @s: string to change.
 * @to: what to change to.
 *
 * Return;  nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
