#include "main.h"

/**
 * _putts - function prints a string
 * @s: String to be printed
 *
 * Return: Counter variable
 */
int _putts(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		_putchar(s[count]);
	}
	return (count);
}
