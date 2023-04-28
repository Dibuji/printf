#include "main.h"

/**
 * print_d - prints integer (base 10)
 * @args: va_list arguments passed
 * Return: number of characters printed
 */

int print_d(va_list args)
{
	int num = va_arg(args, int);
	int total = 0;
	char unit;

	if (num < 0)
	{
		total += write(STDOUT_FILENO, "-", 1);
		num = -num;
	}

	if (num / 10)
		total += print_d_helper(num / 10);
	
	unit = num % 10 + '0';
	total += write(STDOUT_FILENO, &unit, 1);

	return (total);
}

/**
 * print_d_helper - function to recursively print an integer in base 10
 * @num: integer to print
 * Return: number of characters printed
 */

int print_d_helper(int num)
{
	int total = 0;
	char unit;

	if (num / 10)
		total += print_d_helper(num/10);

	unit = num % 10 + '0';
	total += write(STDOUT_FILENO, &unit, 1);

	return (total);
}

