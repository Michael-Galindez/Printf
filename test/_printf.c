#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _puts - function that
 * prints a string, followed by
 * a new line, to stdout.
 * @str: input is a parameter
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != 0)
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}

int _printf(const char *format, ...)
{
int i, s;
char *ptr;

va_list valist;
va_start(valist, format);
i = 0;
while (format[i])
{
	if (format[i] != '%' && format[i - 1] != '%')
	{
		putchar(format[i]);
	}
	else
	{
		switch (format[i + 1])
		{
			case 'c':
				putchar((char)va_arg(valist, int));
			case 's':
				ptr = va_arg(valist, char *);
				write(1, ptr , strlen(ptr));
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
