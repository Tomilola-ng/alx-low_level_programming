#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            putchar(i + '0');  /* Convert and print the first digit */
            putchar(j + '0');  /* Convert and print the second digit */

            if (i != 8 || j != 9)
            {
                putchar(',');   /* Print a comma */
                putchar(' ');   /* Print a space */
            }
        }
    }

    putchar('\n'); /* Print a new line */
    return (0);
}
