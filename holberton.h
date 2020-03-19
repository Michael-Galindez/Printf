#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format_t - format specifier
 * @type: format specificador
 * @func: output function to be used
 */
typedef struct format_t
{
	char *type;
	int (*func)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list valist);
int print_number(va_list valist);
int print_reverse(va_list valist);
int _putchar(char c);
int _strlen(char *s);
int conditional_char(char c);
int (*get_function(const char *s))(va_list valist);
int print_number(va_list valist);
int print_uint(va_list valist);
int print_binary(va_list valist);
int print_hex(va_list valist);
int print_hexcapital(va_list valist);
int print_stringcapt(va_list valist);
int print_o(va_list valist);
int print_R(va_list valist);
#endif
