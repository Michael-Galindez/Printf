#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
int i = 0;
va_list valist;

va_start(valist, format);
/**while (format[i])
{
	switch (format[i])
	{
		case 'c':
		putchar((char)va_arg(valist, int));
		putchar('\n');
		case "s":
		//while
		putchar((char)va_arg(valist, int));
		putchar('\n');
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
	//i++;
//}
	va_end(valist);
	return (0);
}