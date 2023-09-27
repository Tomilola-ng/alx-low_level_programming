#include <stdio.h>
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
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    
    // Check if the result can fit in the buffer
    if (len1 + 1 > size_r || len2 + 1 > size_r)
        return 0; // Error, result too large for the buffer
    
    int carry = 0;
    int max_len = (len1 > len2) ? len1 : len2;
    int i, j, k;

    for (i = len1 - 1, j = len2 - 1, k = 0; k < max_len; i--, j--, k++)
    {
        int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
        int digit2 = (j >= 0) ? (n2[j] - '0') : 0;
        
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        
        r[k] = (sum % 10) + '0';
    }

    if (carry)
    {
        if (k >= size_r - 1)
            return 0; // Error, result too large for the buffer
        r[k] = carry + '0';
        k++;
    }

    r[k] = '\0';

    // Reverse the result string
    for (int start = 0, end = k - 1; start < end; start++, end--)
    {
        char temp = r[start];
        r[start] = r[end];
        r[end] = temp;
    }

    return r;
}
