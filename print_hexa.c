#include "main.h"
#include <stdlib.h>
/**
 * printf_hex_aux - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int number)
{
	long int i = 0;
	long int *arr;
	long int c = 0;
	unsigned long int tmp = number;

	while (number / 16 != 0)
	{
		number /= 16;
		c++;
	}
	c++;
	arr = malloc(sizeof(long int) * c);

	for (; i < c; i++)
	{
		arr[i] = tmp % 16;
		tmp /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (c);
}

