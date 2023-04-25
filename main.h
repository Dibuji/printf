#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
char *itoa(int n, char *s);
void rev_string(char *s);
int print_c(va_list arg);
int print_s(va_list arg);
int print_percent(va_list arg);
int _strlen(char *str);

#endif
