#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - program that generates random passwords for 101-crackme
 * Return: Zero to show success
 */

int main(void)
{
	int sum;
	char var_char;

	srand(time(NULL));

	while (sum <= 2645)
	{
		var_char = rand() % 128;
		sum += var_char;
		putchar(var_char);
	}

	putchar(2772 - sum);

	return (0);
}
