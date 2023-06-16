#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return : always 0 success
 */
int main(void)
{
	srand(time(NULL));
	int n = rand() % 100;
	if (n < 0)
	{
		printf(" %d : is negative", n);
	}
	else if (n > 0)
	{
		printf(" %d : is positive", n);
	}
	else
	{
	printf(" %d : is zero", n);
	}
	return (0);
}
