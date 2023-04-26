#include "main.h"
/**
 * printd - prints an integer to stdout
 * @list: the variable arg list
 * Return: the number of digits printed
 */
int printd(va_list list)
{
	int number = va_arg(list, int);
	char numstring[sizeof(char) * 100];
	unsigned int numlen = 0;

	itoa(number, numstring);
	numlen = _strlen(numstring);

	return (write(1, numstring, numlen));
}
