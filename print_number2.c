#include "holberton.h"
/**
 * print_o - prints octal base number
 * @valist: imput as unsigned int.
 * Return: octal number to be printed
 */

int print_o(va_list valist)
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
		buffer[i] = k % 8;
		k /= 8;
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
