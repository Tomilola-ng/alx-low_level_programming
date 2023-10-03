#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument Count
 * @argv: Argument value
 * Return: Always 0 (Success) or 1 Err
 */

int main(int argc, char const *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int mul1;
	int mul2;

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	printf("%d\n", mul1 * mul2);

	return (0);
}

