#include "main.h"

/**
 * _strcmp - Compares pointer
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: Comparison
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
