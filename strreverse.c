#include "main.h"

/**
 * strreverse - reverses the input string
 * @args: the string to pirnt
 *
 * Return: the char len printed
 */
int strreverse(va_list args)
{

	char *str = va_arg(args, char*);
	int i;
	int k = 0;

	if (str == NULL)
		str = "(null)";
	while (str[k] != '\0')
		k += 1;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
