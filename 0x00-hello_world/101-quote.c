#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
const char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, sentence, sizeof(sentence) - 1);
return (1);
}
