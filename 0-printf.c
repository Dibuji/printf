#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: contains the directive or not
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, total = 0, j = 0;

	va_list args;

	print_t types[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			for (j = 0; types[j].type != '\0'; j++)
			{
				if (format[i] == types[j].type)
				{
					total += types[j].f(args);
					break;
				}
			}
		}
		else
		{
			total += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (total);
}

