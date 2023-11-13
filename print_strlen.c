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
