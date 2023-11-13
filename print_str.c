#include "main.h"
/**
*	print_str - prints a string
*	@val: arguments passed into the function
*	Return: length of string
*/
	int print_str(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
{
	str = "(null)";
	length = _strlen(str);
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);
}
	else
	{
	length = strlen(str);
	for (i = 0; i < length; i++)
		_putchar(str[i]);
	return (length);
	}
}
