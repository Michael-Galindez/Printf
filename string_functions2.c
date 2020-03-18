#include <unistd.h>
#include "holberton.h"
/**
 * print_hs - Aux function to print S
 * @s: unsigned
 * Return: num of characters printed
 */
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
	unsigned int i;
	int count = 0;
	char *str = va_arg(valist, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			count += 2;
			count += print_hs(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
