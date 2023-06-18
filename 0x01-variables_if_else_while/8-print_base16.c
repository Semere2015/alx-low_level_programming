#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int number;
for (number = 0; number <= 15; number++)
{
if (number <= 9)
{
putchar(number + '0');
}
else
{
putchar(number - 10 + 'a');
}
}
putchar('\n');
return (0);
}
