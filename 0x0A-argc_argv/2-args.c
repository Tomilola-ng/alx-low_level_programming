#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of Arguments parsed
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
	int counter;

	for (counter = 0; counter <= argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}

