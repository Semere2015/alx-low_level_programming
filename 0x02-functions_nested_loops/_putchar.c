#include "main.h"
#include <unistd.h>

 /**
  * putchar prints the character c
  *
  * return 0
  */
int _putchar(char c)
{
return (write(1, &c, 1));
}
