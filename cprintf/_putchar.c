#include "mage.h"

/**
 * _putchar -> prints character by character
 * @c: character parameter
 * Return: Character if successful
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
