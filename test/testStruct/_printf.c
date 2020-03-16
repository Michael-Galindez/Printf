#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>


int _printf(const char *format, ...)
{
	int i, count;

	int count, i;
	va_list valist;

	if (format == NULL)
		return (-1);

	va_start(valist, format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* si encuentra el %%%%%%% */
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
	       else if (format[i] == 's' || format[i] == 'd' ||
	       		  format[i] == 'i' || format[i] == 'c' ||
			format[i] == 'r' || format[i] == 'x' || format[i] == 'X')
	       {
		       count += get_function(&format)(valist);
	       }
	       else if (format[i])
	       {
		       _putchar('%')
			       _putchar(format[i])
			       count + 2;
				   }

if ()


va_end(valist);
	return (0);
}
