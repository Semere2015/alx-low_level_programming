#include <stdio.h>
#include "main.h"
 /**
  * positive_or_negative.c - checks if a number is positive or negative
  */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is 0\n", i);
}
}
