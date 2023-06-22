#include "main.h"

/**
 * _isupper - checks if a char is upper or lower case
 * @c: character to be checked
 *
 * return: 0 if it s lower and 1 if it is upper
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
