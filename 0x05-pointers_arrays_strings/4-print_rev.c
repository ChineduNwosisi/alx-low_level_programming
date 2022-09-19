#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s: string
 *
 */

void print_rev(char *s)
{
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	putchar('\n');
}
