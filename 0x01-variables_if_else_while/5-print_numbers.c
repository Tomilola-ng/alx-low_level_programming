#include<stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Buzz kill
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = '0';
	int i = 0;
	/* your code goes there */
	while (i < 10)
	{
		putchar(letter);
		letter++;
		i++;
	}
	putchar('\n');
	return (0);
}
