#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - program prints char, int, float str
 * @format: formats
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int index = 0, start = 0;
	char *p;

	va_start(list, format);

	while (format && format[index] != '\0')
	{
		switch (format[index])
		{ case 'c':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%c", va_arg(list, int));
				break;
		case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(list, char*);
			if (p)
			{ printf("%s", p);
				break; }
			printf("%p", p);
			break; }
		index++;
	}

	printf("\n");
	va_end(list);
}
