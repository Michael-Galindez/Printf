#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>


int _printf(const char *format, ...)
{
int i;

va_list valist;
va_start(valist, format);
	ptr = get_spec_func(format))(va_arg valist);


va_end(valist);
	return (0);
}
