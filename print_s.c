#include "main.h"

/**
 * print_s - prints a string of characters
 * @args: a list of arguments
 *
 * Return: number of characters printed
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);

	int len = 0;

	if (str == NULL)
		str = "(null)";
	
	while (str[len])
		len++;

	return (write(1, str, len));
}
