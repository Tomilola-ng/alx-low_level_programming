#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints opcodes
 * @argc: Args count
 * @argv: Args val
 * Return: 0 not Void
 */

int main(int argc, char *argv[])
{
	int bytes, counter;

	int (*address)(int, char **) = main;

	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (counter = 0; counter < bytes; counter++)
	{
		opcode = *(unsigned char *)address;

		printf("%.2x", opcode);

		if (counter == bytes - 1)
			continue;

		printf(" ");
		address++;
	}

	printf("\n");

	return (0);
}