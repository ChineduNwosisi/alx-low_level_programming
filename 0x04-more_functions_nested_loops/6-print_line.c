#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of _ to print
 * Returns nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('-');
	}
	putchar('\n');
}
