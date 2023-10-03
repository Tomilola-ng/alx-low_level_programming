#include <stdio.h>
#include <stdlib.h>

/**
*main - prpgram that prints the min num of naira
*@argc: arguments count
*@argv: arguments value
*Return: 0 or 1 Success or error
*/

int main(int argc, char *argv[])
{
int kobo, naira = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
kobo = atoi(argv[1]);
while (kobo > 0)
{
	naira++;
	if ((kobo - 25) >= 0)
	{
		kobo -= 25;
		continue;
	}
	if ((kobo - 10) >= 0)
	{
		kobo -= 10;
		continue;
	}
	if ((kobo - 5) >= 0)
	{
		kobo -= 5;
		continue;
	}
	if ((kobo - 2) >= 0)
	{
		kobo -= 2;
		continue;
	}
	kobo--;
}
printf("%d\n", naira);
return (0);
}
