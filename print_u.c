#include "main.h"

/**
 * print_u - prints an unsigned integer in base 10
 * @args: the va_list argument
 * Return: the number of characters printed
 */

int print_u(va_list args)
{
	int total = 0, digit, i;
	char *c;

	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	c = malloc(sizeof(char) * 32);
	if (c == NULL)
		return (-1);

	for (i = 0; num != 0; i++)
	{
		digit = num % 10;
		c[i] = digit + '0';
		num /= 10;
	}

	for (i--; i >= 0; i--)
		total += _putchar(c[i]);

	free(c);

	return (total);
}
