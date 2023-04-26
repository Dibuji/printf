#include <unistd.h>
#include <stdarg.h>
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
	unsigned int strlen = _strlen(str);

	if (strlen == 0)
		return (0);

	return (write(1, str, strlen(str)));
}

/**
 * _strlen - calculates length of a string
 * @str: string
 *
 * Return: length of string, str.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return (len);
}

