#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: Honestly I don't know
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';
	int i = 0;
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

