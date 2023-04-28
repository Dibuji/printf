#include "main.h"

/**
 * print_c - prints a single character
 * @args: a list of arguments
 *
 * Return: number of characters printed
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}


