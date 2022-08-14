#include "mage.h"

/**
 * print_strrev -> prints a string in reverse
 * @args: string parameter
 * Return: no of characters
 */
int print_strrev(va_list args)
{
	char *s = va_arg(args, char *);

	int i;
	int len = _strlen(s);

	if (s == NULL)
	{
		s = "(null)";
		_printf("%s", s);
		return (_strlen(s));
	}
	else
		for (i = len; i >= 0; i--)
			_putchar(s[i]);
	return (len);
}





/**
 * print_bin -> prints a binary
 * @args: argument parameter
 * Return: no of digits
 */
int print_bin(va_list args)
{
	int binaryNUM[32]; /* assuming 32 bit integer*/
	int i = 0, j = 0;

	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar(num + '0');
		return (1);
	}

	/* stores binary representation of num*/
	for ( ; num > 0; )
	{
		binaryNUM[i++] = num % 2;
		num /= 2;
	}

	/* printing in reverse*/
	for (j = i - 1; j >= 0; j--)
	{
		_printf("%d", binaryNUM[j]);
	}

	return (1);
}






/**
 * print_percent -> prints %
 * Return: 1 if successful
 */
int print_percent(void)
{
	_putchar(37);
	return (1);
}

/**
 * print_oct -> prints number in octal system
 * @args: argument parameter
 * Return: no of character
 */
int print_oct(va_list args)
{
	int octalNUM[32], i, j, counter = 0;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar(num + '0');
		counter++;
	}

	for (i = 0; num > 0; i++)
	{
		octalNUM[i] = num % 8;
		num /= 8;
		counter++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_printf("%d", octalNUM[j]);
	}
	return (counter);
}

/**
 * print_HEX -> pri a Hexdecimal number
 * @args: arguments
 * Return: no of digits.
 */
int print_HEX(va_list args)
{

	char HEXdecimal[100];
	int i = 0, j, temp = 0, counter = 0;
	unsigned long int num;


	unsigned long int num = va_arg(args, unsigned long int);

	if (num == 0)
	{
		_putchar('0');
		counter++;
	}

	while (num != 0)
	{
		temp = num % 16;
	/* to convert integer into char*/
		if (temp < 10)
			HEXdecimal[i++] = temp + 48; /*give betwn 0-9 */
		else
			HEXdecimal[i++] = temp + 55; /* 55 + 10 = smalpht*/
		num /= 16;
		counter++;
	}

	/* to print the array of hex*/
	for (j = i - 1; j >= 0; j--)
		_printf("%c", HEXdecimal[j]);

	return (counter);
}
