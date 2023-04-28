#include "main.h"
#include <unistd.h>

/**
 * printf_p - prints a pointer to a variable
 * @arg: arguments.
 * Return: number of chars printed
 */
int printf_p(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int temp = 0;
	int i = 0;
	int hex_val = 0;

	ptr = va_arg(arg, void*);
	if (ptr == NULL)
	{
		for (; str[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	temp = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	hex_val = printf_hex(temp);
	return (hex_val + 2);
}
