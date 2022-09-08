#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int a;
char b;
float c;
long int d;
long long int e;
printf("Size of an int: %lu.\n", (unsigned long)sizeof(a));
printf("Size of a char: %lu.\n", (unsigned long)sizeof(b));
printf("Size of a float: %lu.\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu.\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(e));
return (0);
}
