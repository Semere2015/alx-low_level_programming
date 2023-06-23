#include "main.h"

/**
 *
 *
 *
 */
void print_diagonal(int n)
{
int i = 0;
int j;
while(i < n)
{
j = 0;
while(j < n)
{	
_putchar('\\');
_putchar('\n');
j++;
}
i++;
}
}
