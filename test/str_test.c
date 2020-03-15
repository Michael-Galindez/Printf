#include <unistd.h>

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
	i++;
	}
	return (i);
}

int print_int(int i)
{
	return (write(1, &i, _strlen(i)));
}
int print_string(char c)
{
	return (write(1, &c, _strlen(c)));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
	int *number;
    int len;

    str = "Holberton!";
	number = 1237;
	print_string(*str);
	print_int(*number)
    return (0);
}