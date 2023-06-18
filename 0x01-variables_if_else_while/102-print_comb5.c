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
int k;
int l;
for (i = 0; i <= 8; i++)
{
for (j = 0; j <= 8; j++)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
for (k = 1; k <= 9; k++)
{
for (l = 1; l <= 9; l++)
{
putchar(k + '0');
putchar(l + '0');
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
