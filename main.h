#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list val);
int print_str(va_list val);
int _strlen(char *s);
int _strlenc(const char *s)
int print_percent(void);

#endif
