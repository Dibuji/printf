#include "main.h"
/**
 * rot13 - prints the rot-13 sipher
 * @args: the flag
 * Return: the char len
 *
 */
int rot13(va_list args)
{
	int i, j;
	int c = 0, k = 0;
	char *str = va_arg(args, char*);
i	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (str == NULL)
		s = "(null)";
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (str[i] == a[j])
			{
				_putchar(b[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			c++;
		}
	}
	return (c);
}

