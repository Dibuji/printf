#include <stdlib.h>
#include "main.h"

/**
 * print_b - prints an unsigned integer in binary
 * @args: the va_list argument
 * Return: the number of characters printed
 */

int print_b(va_list args)
{
	int total = 0;
	int digit = 0, i; /* used in conversion to binary */
	char *binary; /* pointer to array that holds binary representations */

	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
		return (write(STDOUT_FILENO, "0", 1));

	for (i = 0; i < 32; i++) /* Note: 32 is number of bits in an unsigned int */
	{
		if ((num >> i) & 1) /* bitwise movement and & comparison */
			digit = i;
	}

	binary = malloc((digit + 1) * sizeof(char));
	if (binary == NULL)
		return (-1);

	for (i = digit; i >= 0; i--)
	{
		 binary[digit - i] = ((num >> i) & 1) + '0';
	}
	binary[digit + 1] = '\0';

	total += write(STDOUT_FILENO, binary, digit + 1);
	free(binary);

	return (total);
}
