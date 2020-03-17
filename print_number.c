#include "holberton.h"
/**
 * print_number - function to print an integer
 * @valist: input is an intiger
 * Return: void
 */
int print_number(va_list valist)
{
	unsigned int m;
	int n, i, k, digits = 0;

	n = va_arg(valist, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		digits++;
	}
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		digits++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	digits++;
	return (digits);
}

/**
 * print_uint - funct print unsigned int
 * @valist: input is an unsigned int
 * Return: void
 */
int print_uint(va_list valist)
{
	unsigned int n, m, i, k, digits = 0;

	n = va_arg(valist, unsigned int);
	m = n;
	k = 0;
	while (m / 10 > 0)
	{
		m /= 10;
		k++;
	}
	m = n;
	while (k != 0)
	{
		for (i = 0; i < k; i++)
		{
			m /= 10;
		}
		m %= 10;
		_putchar(m + '0');
		digits++;
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
	digits++;
	return (digits);
}
