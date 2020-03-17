#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - find the length of a string so ew can use write lmao.
 * @s: string to be parsed
 * Return: numero of characters in string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - print a character
 * @valist: va_list containing variadic arguments
 * Return: num of characters printed
 */
int print_char(va_list valist)
{
	int c;

	c = va_arg(valist, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print a string to stdout
 * @valist: va_list containing variadic <-  arguments asi como en el 3 gvon
 * Return: num of characters printed
 */
int print_string(va_list valist)
{
	int i;
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}

/**
 * print_reverse - print a string in reverse
 * @valist: va_list
 * Return: num of characters printed
 */
int print_reverse(va_list valist)
{
	int i, len;
	char *s;

	s = va_arg(valist, char *);

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
