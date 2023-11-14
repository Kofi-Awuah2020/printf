#include "main.h"
/**
*	print_char - prints a character
*	@val: arguments passed into the function
*	Return: 1
*/
	int print_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
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
#include "main.h"
/**
*	print_percent - prints %
*	Return: integer
*/
	int print_percent(void)
{
	_putchar(37);
	return (1);
}
#include "main.h"
/**
*	 _strlen - a function that returns string length
*	 @s: function parameter
*	 Return: the length of string
*/

	int _strlen(char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	count++;

	return (count);
}

/**
*	_strlen - applied for const char format
*	@s: character pointer
*	Return: the length of string
*/
	int _strlenc(const char *s)
{
	int n;
	int count = 0;

	for (n = 0; s[n] != '\0'; n++)
	count++;

	return (count);
}
