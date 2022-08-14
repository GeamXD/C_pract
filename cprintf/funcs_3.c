#include "mage.h"
/**
 * print_hex -> prints hexdecimal number
 * @args: argumeter
 * Return: no of digits
 */
int print_hex(va_list args)
{
	char hexdecimal[100];
	int i = 0, j = 0, temp = 0, counter = 0;
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

		if (temp < 10)
			hexdecimal[i++] = temp + 48;
		else
			hexdecimal[i++] = temp + 87;
		num /= 16;
		counter++;
	}
	for (j = i - 1; j >= 0; j--)
		_printf("%c", hexdecimal[j]);

	return (counter);
}


/**
 * print_pointers -> prints a pointer value
 * @args: argument
 * Return: no of digits
 */

int print_pointers(va_list args)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b, i;

	p = va_arg(args, void*);

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}
	else
		a = (unsigned long int)p;
		_putchar('0');
		_putchar('x');
		b = printf_hex_aux(a);
		return (b + 2);
}