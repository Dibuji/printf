#include <stdlib.h>
#include "main.h"

/**
 * print_o - Print an unsigned int in octal format
 * @args: va_list of args
 * Return: number of digits printed
 */

int print_o(va_list args)
{
	int total = 0, digit, i;
	char *octal;

	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	octal = malloc(sizeof(char) * 32);
	if (octal == NULL)
		return (-1);

	for (i = 0; num != 0; i++)
	{
		digit = num % 8;
		octal[i] = digit + '0';
		num /= 8;
	}

	for (i--; i >= 0; i--)
		total += _putchar(octal[i]);

	free(octal);
	return (total);
}
