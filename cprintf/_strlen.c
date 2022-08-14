#include "mage.h"

/**
 * _strlen -> finds the length of string
 * @s: string parameter
 * Return: String length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}


/**
 * _strlenc -> finds string length of const char *
 * @s: parameter
 * Return: string length
 */
int _strlenc(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
