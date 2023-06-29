#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print reversed sentence
 * @s: parameter
 */
void print_rev(char *s)
{
if (*s)
{
print_rev(s + 1);
printf("%c", *s);
}
}
