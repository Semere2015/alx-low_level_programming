#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print reversed sentence
 * @s: parameter
 */

void print_rev(char *s)
{
int i = 0;
int length;

for (length = 0; s[length] != '\0'; length++)
{
}

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
