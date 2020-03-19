#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * get_function - checks character to an array of structs.
 * If a successful match is found, the matching function.XCy
 * @s: The incoming character to be evalued by Michael.
 * Return: pointer to a function to format specifier
 */
int (*get_function(const char *s))(va_list valist)
{
	format_t formats[] = {
		{"c", print_char},
		{"s", print_string},
		{"r", print_reverse},
		{"d", print_number},
		{"i", print_number},
		{"u", print_uint},
		{"b", print_binary},
		{"x", print_hex},
		{"X", print_hexcapital},
		{"S", print_stringcapt},
		{"o", print_o},
		{"R", print_R},
		{NULL, NULL}
	};

	int i;

	for (i = 0; formats[i].type != NULL; i++)
	{
		if (*s == *formats[i].type)
			return (formats[i].func);
	}
	exit(1);
}
