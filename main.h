#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
char *itoa(int n, char *s);
void revstring(char *s);
int _strlen(char *str);

/* format specifiers */
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int print_d(va_list list);
int print_i(va_list list);
int print_d_helper(int num);
int print_b(va_list args);
int print_o(va_list args);
int print_x(va_list args);
int print_upper_x(va_list args);
int print_u(va_list args);


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

