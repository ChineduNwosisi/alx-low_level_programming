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
printf("Size of an int: %d bytes(s)\n", sizeof(a));
printf("Size of a char: %d bytes(s)\n", sizeof(b));
printf("Size of a float: %d bytes(s)\n", sizeof(c));
printf("Size of a long int: %d byte(s)\n", sizeof(d));
printf("Size of a long long int: %d byte(s)\n", sizeof(e));
return (0);
}
