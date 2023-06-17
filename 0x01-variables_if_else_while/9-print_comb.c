#include <stdio.h>

/*printing numbers separated by commas*/
int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
if (number < 9)
{
putchar(number + '0');
putchar(',');
putchar(' ');
}
else
{
putchar(number + '0');
}
}
putchar('\n');
return (0);
}
