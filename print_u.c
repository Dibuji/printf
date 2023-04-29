#include "main.h"

/**
 * print_u - prints an unsigned integer in base 10
 * @args: the va_list argument
 * Return: the number of characters printed
 */

int print_u(va_list args)
{
	int total = 0;
	char c;

	unsigned int num = va_arg(args, unsigned int);

	if (num / 10)
		total += print_u(args);

	c = num % 10 + '0';

	total += write(STDOUT_FILENO, &c, 1);

	return (total);
}
