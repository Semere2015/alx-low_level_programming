#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 8; i++)
{
for (j = 1; j <= 9; j++)
{
if (i > j)
continue;
putchar(i + '0');
putchar(j + '0');
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
