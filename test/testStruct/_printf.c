#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _printf - prints output according to the format specified.
 * @format: character string containing format specifiers
 * Return: The number of chacters printed. Return -1 on error.
 */
int _printf(const char *format, ...)
{
	int counter, i;
	va_list valist;

	if (format == NULL)
		return (-1);

	va_start(valist, format);

	counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
	   if (format[i] == '%')
		{
			/* si encuentra el %%%% del mudluo*/
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				counter++;
			}
			else if (format[i] == 's' || format[i] == 'd' ||
				  format[i] == 'i' || format[i] == 'c' ||
				 format[i] == 'r')
			{
				counter += get_function(&format[i])(valist);
			}
			else if (format[i] != '\0')
			{
				_putchar('%');
				_putchar(format[i]);
				counter += 2;
			}
			else if (format[i] == '\0' && (i - 1) == 0)
			{
				return (-1);
			}
			else
			{
				_putchar('%');
				counter++;
			}
		}
		else
		{
			_putchar(format[i]);
			counter++;
		}
	}
	va_end(valist);
	return (counter);
}
