#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char hex_digits[] = "0123456789abcdef"; /* Array of hexadecimal digits */
    int i = 0;

    while (i < 16)
    {
        putchar(hex_digits[i]); /* Print the hexadecimal digit */
        i++;
    }

    putchar('\n'); /* Print a new line */
    return (0);
}
