#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: The integer to be computed
 *
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
