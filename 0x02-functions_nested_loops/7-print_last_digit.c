#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: The number in question
 *
 * Return: Value of the last digit
 */
int print_last_digit(int nld);
{
	int ld;

	ld = (nld % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}
	_putchar(ld + '0');

	return (ld);
}
