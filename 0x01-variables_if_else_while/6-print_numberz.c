#include <stdio.h>

/*printing single digit numbers*/
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
