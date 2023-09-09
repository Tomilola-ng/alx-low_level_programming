#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	int i = 0;
/* your code goes there */
	while (i < 26)
	{
		putchar(letter);
		letter++;
		i++;
	}
	letter = 'A';
	i = 0;
	while (i < 26)
	{
		putchar(letter);
		letter++;
		i++;
	}
	putchar('\n');
	return (0);
}
