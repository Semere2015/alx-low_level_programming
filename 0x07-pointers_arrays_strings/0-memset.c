#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 * @s: parameter1
 * @b: parameter2
 * @n: parameter3
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
