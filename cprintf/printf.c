#include "mage.h"

/**
 * _printf -> func that selects functions
 * @format: identifier  being checked
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	PrintfStruct printid[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int},
		{"%d", print_dec},
		{"%b", print_bin},
		{"%u", print_unsigned},
		{"%r", print_strrev}
	}
}