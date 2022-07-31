#include "main.h"
/**
 * _strlen - string length
 * @s: string 
 * Return: string length of parameter 
 */
int _strlen(char *s)
{
	/*using while loop*/
	int len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
int __strlen(char *s)
{
	/*using for loop*/
	int len;

	for (len = 0; len <= s[len]; len++)
	{
	}
	return (len);
}
