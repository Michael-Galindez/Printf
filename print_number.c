#include "holberton.h"
/**
 * print_number - function to print an integer
 * @valist: input is an intiger
 * Return: int
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
 * Return: int
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
/**
 * print_binary - function that prints int in binary
 * @valist: input is an unsigned int
 * Return: int
 */
int print_binary(va_list valist)
{
	int i = 0, j;
	char buffer [10000] = {'\0'};
	unsigned int k;

	k = va_arg(valist, unsigned int);
	if (k == 0)
	{
		_putchar('0');
		return (1);
	}
	while (k > 0)
	{
		buffer[i] = k % 2;
		k /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(buffer[j] + '0');
		j--;
	}
	return (i);
}
