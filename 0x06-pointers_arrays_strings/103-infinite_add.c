#include <stdio.h>
#include <string.h>
#include "main.h"

/*
  * infinite_add - Program to hjeblurv.bjhbfe.
  * @n1: Cold
  * @n2: String Number Cold
  * @r: String Number Cold
  * @size_r: String Number Cold
  * Return: Null
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum, max_len;

    while (n1[len1] != '\0')
    {
        len1++;
    }
    while (n2[len2] != '\0')
    {
        len2++;
    }

    max_len = (len1 > len2) ? len1 : len2;

    if (max_len + 1 > size_r)
    {
        return 0;
    }

    r[max_len + 1] = '\0';

    for (int i = max_len; i >= 0; i--)
    {
        int digit1 = (i >= len1) ? 0 : n1[len1 - i - 1] - '0';
        int digit2 = (i >= len2) ? 0 : n2[len2 - i - 1] - '0';

        sum = digit1 + digit2 + carry;

        carry = sum / 10;

        r[i] = (sum % 10) + '0';
    }

    if (carry > 0)
    {
        if (max_len + 2 > size_r)
        {
            return 0;
        }
        r[0] = carry + '0';
        return r;
    }

    return r;
}
