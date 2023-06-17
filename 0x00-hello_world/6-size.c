#include <stdio.h>

/**
 * main - size of data types
 *
 * Return: Always 0 (Success)
 */
int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu byte\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    return (0);
}
