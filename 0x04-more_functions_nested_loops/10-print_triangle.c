#include "main.h"

/**
 * print_triangle - prints triangle with # character
 *@size: size of the triangle
 */
void print_triangle(int size)
{
int i;
int j;
for (i = 0; i <= size; i++)
{
for (j = size; j >= 0; j--)
{
if (j >= i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
