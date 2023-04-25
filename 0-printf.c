#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: contains the directive or not
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, total = 0;

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				total += print_c(args);
			else if (format[i] == 's')
				total += print_s(args);
			else if (format[i] == '%')
				total += print_percent(args);
			else
			{
				write(1, "%", 1);
				write(1, &format[i], 1);
				total += 2;
			}
		}
		else
		{
			write(1, &format[i], 1);
			total++;
		}
		i++;
	}

	va_end(args);

	return (total);
}
