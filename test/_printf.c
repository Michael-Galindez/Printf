#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>

int _printf(const char *format, ...)
{
int j, i = 0;
va_list valist;

va_start(valist, format);
while (format[i])
{
	if (format[i] != '%' && format[i-1] != '%')
	{
		putchar(format[i]);
	}
	else
	{
		switch (format[i])
		{
			case 'c':
				putchar((char)va_arg(valist, int));
			case 's':
			j = 0;
			while(format[j])
				j++;
			write(1, format, j);
			/**putchar((char)va_arg(valist, int));
				format++;*/
		
		/**case "i":
		case "d":
		case "u":
		case "b":
		case "o":
		case "x":
		case "X":
		case "p":
		case "S":
		case "r":
		case "R":*/
		default:
			break;
		}
	}
	i++;
}
	va_end(valist);
	return (0);
}
