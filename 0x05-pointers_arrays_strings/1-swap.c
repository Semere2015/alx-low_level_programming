#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two intigers
 *@a: parameter
 *@b: parameter
 */
void swap_int(int *a, int *b)
{
int c = 0;
c = *a;
*a = *b;
*b = c;
}
