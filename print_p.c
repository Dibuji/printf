#include "main.h"

/**
 * print_p - prints a pointer to a variable
 * @arg: the number
 * Return: number of chars written
 */
int print_p(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(arg, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_x(a);
	return (b + 2);
}

