#include "holberton.h"
/**
 * print_o - prints octal base number
 * @valist: imput as unsigned int.
 * Return: octal number to be printed
 */

int print_o(va_list valist)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int count;

	n = va_arg(valist, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	i = 0;
	while (i < 11)
	{
		m /= 8;
		a[i] = (n / m) % 8;
		i++;
	}
	for (i = 0, sum = 0, count = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
