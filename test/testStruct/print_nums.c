#include <stdlib.h>
#include "holberton.h"
/**
 * print_i
 *
 *
 */
int print_i (va_list, valist)

	int i;

	i = va_arg(valist, int)
	if (i < 0)
		putchar('-');
			putchar(i);

	else if (i == 0)
		_putchar('0');
	else if (i > 0)
		_putchar(i);

return(i);
