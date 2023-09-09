#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 99; i++)
    {
        for (j = i + 1; j <= 99; j++)
        {
            /* Print the first two-digit number */
            putchar((i / 10) + '0'); /* Print tens digit */
            putchar((i % 10) + '0'); /* Print ones digit */

            /* Print a space between the two numbers */
            putchar(' ');

            /* Print the second two-digit number */
            putchar((j / 10) + '0'); /* Print tens digit */
            putchar((j % 10) + '0'); /* Print ones digit */

            if (i != 98 || j != 99)
            {
                /* Print a comma and a space if it's not the last combination */
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n'); /* Print a new line */
     return (0);
}

