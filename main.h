#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_%(va_list args);

#endif
