#ifndef MAGE_H
#define MAGE_H
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list args);
int print_unsigned(va_list args);
int print_strrev(va_list args);
int _strlenc(const char *s);
int print_percent(void);
int _strlen(char *s);
int print_pointers(va_list args);
int print_exstring(va_list args);
int print_rot13(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_hex_aux(unsigned long int num);
int print_HEX_aux(unsigned long int num);
int print_oct(va_list args);



/**
 * struct printtype -> struct
 * @c: string
 * @ptr: function pointer
 */
typedef struct printtype
{
	char *c;
	void (*ptr)(va_list);
} PrintfStruct;

#endif /* MAGE_H */
