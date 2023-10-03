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
	int answer;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	answer = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", answer);

	return (0);
}

