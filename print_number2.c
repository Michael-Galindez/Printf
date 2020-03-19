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
/**
 * print_R - prints the rot13'ed string
 * @valist: imput as unsigned int.
 * Return: octal number to be printed
 */
int print_R(va_list valist)
{
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(valist, char *);
	if (str == NULL)
	str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
	{
		if (in[j] == str[i])
		{
			_putchar(out[j]);
			count++;
			break;
		}
	}
		if (!in[j])
	{
		_putchar(str[i]);
		count++;
	}
	}
	return (count);
}
