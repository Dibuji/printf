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
int print_d(va_list list);
int print_i(va_list list);
int _strlen(char *str);
int print_d_helper(int num);

/**
 * struct print_t - declares print_t structure
 * @type: character
 * @f: pointer to function to use
 *
 * Description: structure for storing print types
 */

typedef struct print_t
{
	char type;
	int (*f)(va_list);
} print_t;

#endif

