#include <unistd.h>
#include "holberton.h"

int print_hs(unsigned int s)
{
	char buffer[15];
	unsigned int m, i = 0, reminder = 0;
	int digits = 0;

	m = s;
	while (m != 0)
	{
		reminder = m % 16;
		if (reminder > 9)
		{
			buffer[i] =  (char)(reminder + 55);
		}
		else
		{
			buffer[i] = (char)(reminder + 48);
		}
		m = m / 16;
		i++;
	}
	while (i--)
	{
		_putchar(buffer[i]);
		digits++;
	}
	return (digits);
}

/**
 * print_stringcapt - print Non printable characters
 * @valist: va_list containing variadic
 * Return: num of characters printed
 */
int print_stringcapt(va_list valist)
{
	int i, digits = 0;
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar(92);
			_putchar('x');

			digits = digits + 2;
			digits = digits + print_hs(s[i]);
			i++;
			_putchar(s[i]);
			digits++;
		}
		else
		{
		_putchar(s[i]);
		digits++;
		}
	}
	return (digits);
}
