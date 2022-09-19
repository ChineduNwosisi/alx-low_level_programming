#include "main.h"

/**
 * strcpy - Copy a string
 * @dest: Buffer to copy string to
 * @src: Source string
 * Description: Copy the string pointed to by pointer `src` to
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
