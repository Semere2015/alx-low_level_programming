#include "main.h"

/**
 * print_square - print squares using #
 *@size: size of square
 */
void print_square(int size)
{
int i = 0;
int j;
while (i < size)
{
int j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
