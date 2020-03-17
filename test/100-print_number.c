#include "holberton.h"

/**
   * print_number - function that
    * prints an integer.
     * @n: input is an intiger
      * Return: void
       */

void print_number(int n)
{
	unsigned int m;
	int i, k;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
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
		k--;
		m = n;
	}
	_putchar(m % 10 + '0');
}
