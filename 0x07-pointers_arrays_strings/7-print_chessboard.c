#include "main.h"

/**
 * print_chessboard - Program to print the chess Board
 * @a: pointer with the location of the string
 * Return: None Void
 */

void print_chessboard(char (*a)[8])
{
	int counter;
	int index;

	for (counter = 0; counter <= 7; counter++)
	{
		for (index = 0; index <= 7; index++)
		{
			_putchar(a[counter][index]);
		}
		_putchar('\n');
	}
}
