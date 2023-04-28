#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *itoa(int n, char *s);
void revstring(char *s);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int printd(va_list list);
int printi(va_list list);
int _strlen(char *str);

/**
 * print_t - declares print_t structure
 * @type: character
 * @func: pointer to function to use
 */

typedef struct print_t
{
	char type;
	int (*f)(va_list);
} print_t;

#endif
