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
for (i = 0; i <= 7; i++)
{
for (j = 1; j <= 8; j++)
{
for (k = 2; k <= 9; k++)
{
putchar (i + '0');
putchar (j + '0');
putchar (k + '0');
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
