#include "main.h"

/**
 * more_numbers - prints from one to fourteen ten times
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
{
_putchar(i + '0');
_putchar(j + '0');
}
}
_putchar('\n');
}
