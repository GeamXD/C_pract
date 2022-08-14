#include "mage.h"


/**
 * print_char -> prints character
 * @args: arguments
 * Return: 1 if successful;
 */
int print_char(va_list args) /* test out void later*/
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}







/**
 * print_string -> prints a string
 * @args: arguments
 * Return: length of string
 */
int print_string(va_list args)
{
	int i, len;
	char *s;

	s = va_arg(args, char *);

	len = _strlen(s);
	if (s != NULL)
	{
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}






/**
 * print_int -> prints an integer
 * @args: integer parameter
 * Return: no of characters printed
 */
int print_int(va_list args)
{
	int var = va_arg(args, int);
	int counter = 0; /* take note--> counter */

	/* if no is negative, adds a '-' in front */
	/* convert that number to positive */
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}

	/*removes the last digit and prints the rest recursively*/
	if (var / 10)
		print_int(var / 10);

	/* prints last digit*/
	_putchar((var % 10) + '0');

	/* counter format*/
	do {
		var /= 10;
		counter++;
	} while (var != 0);

	return (counter);
}


/**
 * print_dec -> prints an integer
 * @args: integer parameter
 * Return: no of characters printed
 */
int print_dec(va_list args)
{
	int var = va_arg(args, int);
	int counter = 0; /* take note--> counter */

	/* if no is negative, adds a '-' in front */
	/* convert that number to positive */
	if (var < 0)
	{
		_putchar('-');
		var = -var;
	}

	/*removes the last digit and prints the rest recursively*/
	if (var / 10)
		print_int(var / 10);

	/* prints last digit*/
	_putchar((var % 10) + '0');

	/* counter format*/
	do {
		var /= 10;
		counter++;
	} while (var != 0);

	return (counter);
}






/**
 * print_unsigned -> prints only positive digit
 * @args: parameter
 * Return: no of digits
 */
int print_unsigned(va_list args)
{
	int var = va_arg(args, unsigned int);
	int counter = 0; /* take note--> counter */

	/*removes the last digit and prints the rest recursively*/
	if (var / 10)
		print_int(var / 10);

	/* prints last digit*/
	_putchar((var % 10) + '0');

	/* counter format*/
	do {
		var /= 10;
		counter++;
	} while (var != 0);

	return (counter);
}
