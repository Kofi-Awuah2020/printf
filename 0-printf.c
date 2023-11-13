#include "main.h"
/**
*	_printf -  produces output according to a format.
*	@format: function parameter
*	Return: 0 success, -1 failure
*/

int _printf(const char *format, ...)
{
	va_list args;

	if (format == NULL)
	return (-1);

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
