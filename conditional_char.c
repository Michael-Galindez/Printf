#include "holberton.h"
/**
 * conditional_char - function compare chars
 * @c: input is a char
 * Return: int
 */
int conditional_char(char c)
{
	int i = 0;

	if (c == 's' || c == 'd' || c == 'i'
	|| c == 'c' || c == 'r' || c == 'u'
	|| c == 'b' || c == 'x' || c == 'X'
	|| c == 'S' || c == 'o' || c == 'R')
	{
		i = 1;
	}
	return (i);
}
