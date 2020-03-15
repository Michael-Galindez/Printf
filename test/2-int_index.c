#include "function_pointers.h"

/**
 * int_index - function that
 * searches for an integer.
 * @array: input array
 * @size: is unsigned int size of the array
 * @cmp: is a pointer to a function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, carry = 0;

	if (array == '\0' || cmp == '\0')
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
		for (i = 0; i < size; i++)
		{
			carry = cmp(array[i]);
			if (carry != 0)
				return (i);
		}
	return (-1);
}
