#include "mage.h"
/**
 * print_hex_aux -> prints hexdecimal number
 * @num: parameter
 * Return: no of digits
 */
int print_hex_aux(unsigned long int num)
{
	char hexdecimal[100];
	int i = 0, j = 0, temp = 0, counter = 0;

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
 * print_HEX_aux -> pri a Hexdecimal number
 * @num: parameter
 * Return: no of digits.
 */
int print_HEX_aux(unsigned long int num)
{

	char HEXdecimal[100];
	int i = 0, j, temp = 0, counter = 0;

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
