#include <stdio.h>

/*printing numbers with two digit*/
int main(void)
{
int i;
int j;
int last_i = 8;
int last_j = 9;
for (i = 0; i <= 8; i++)
{
for (j = 1; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == last_i && j == last_j)
continue;
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
