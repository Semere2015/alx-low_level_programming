#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character
 *
 * Return: write function
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
