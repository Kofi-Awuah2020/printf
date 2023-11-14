#include "main.h"

/**
 * _putts - function prints a string
 *
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
