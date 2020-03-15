#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexad[16] = "0123456789abcdef";
	int i = 0;

	while (i < 16)
{
	putchar(hexad[i]);
	i++;
}
	putchar('\n');
	return (0);
}
