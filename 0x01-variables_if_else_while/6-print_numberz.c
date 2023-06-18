#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
int numbers;
for (numbers = 0; numbers < 10; numbers++)
{
putchar(numbers + '0');
}
putchar('\n');
return (0);
}
