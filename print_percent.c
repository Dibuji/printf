#include <unistd.h>
#include "main.h"

/**
 * print_percent - prints a prcent character
 * @args: a list of arguments
 *
 * Return: the number of characters printed
 */

int print_percent(__attribute__((unused)) va_list args)
{
	return (write(1, "%", 1));
}


