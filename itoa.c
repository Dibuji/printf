#include "main.h"

/**
 * itoa - takes an integer and converts to a stream of digits
 * @n: the integer
 * @s: the target char array
 * Return: a pointer to the array
 */
char *itoa(int n, char *s)
{
	int i, sign;

	sign = n;
	if (sign < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
	{
		s[i++] = '-';
	}
	s[i] = '\0';
	revstring(s);
	return (s);
}
