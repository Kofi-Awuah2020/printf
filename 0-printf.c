#include "main.h"
/**
*	_print -  produces output according to a format.
*	@format: function parameter
*	Return: 0 success, -1 failure
*/

int _print(const char *format, ...)
{
	if (format == NULL)
	return (-1);

	va_list args;

	va_start(args, format);

	int char_print = 0;

	while (*format)
	{
	if (*format != '%' || (*(format + 1) == '%' && format++))
	{
		write(1, format, 1);
		char_print++;
	}
	else if (*format == 'c')
	{
		char c = va_arg(args, int);

		write(1, &c, 1);
		char_print++;
	}

	format++;
	}

	va_end(args);

	return (char_print);
}
