#include <stdlib.h>
#include "main.h"

/**
 * print_upper_x - Print an unsigned int in upper hexadecimal
 * @args: va_list of arguments
 * Return: Number of digits printed
 */

int print_upper_x(va_list args)
{
	int total = 0, digit, i;
	char *hex;

	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	hex = malloc(sizeof(char) * 32);

	if (hex == NULL)
		return (-1);

	for (i = 0; num != 0; i++)
	{
		digit = num % 16;
		if (digit < 10)
			hex[i] = digit + '0';
		else
			hex[i] = digit + 'A' - 10;
		num /= 16;
	}

	for (i--; i >= 0; i--)
		total += _putchar(hex[i]);

	free(hex);
	return (total);
}
