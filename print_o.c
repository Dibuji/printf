#include <stdlib.h>
#include "main.h"

/**
 * print_o - Print an unsigned int in octal format
 * @args: va_list of args
 * Return: number of digits printed
 */

int print_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int total = 0, digit, i;
	char *octal;

	if (num == 0)
		return (_putchar('0'));

	for (digit = 0, i = 0; i < 11; i++)
	{
		if ((num >> i * 3) == 0)
		{
			digit = i - 1;
			break;
		}
	}

	octal = malloc(digit + 1);
	if (!octal)
		return (-1);

	for (i = 0; i <= digit; i++)
	{
		octal[digit - 1] = (num >> 1 * 3) & 0x7;
		octal[digit - 1] += '0';
	}

	for (i = 0; i <= digit; i++)
		total += _putchar(octal[i]);

	free(octal);
	return (total);
}
