#include <stdio.h>

/**
 * print_str - Print a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */

int print_str(char *str)
{
	int count = 0;

	while (*str)
	{
		putchar(*str);
		count++;
		str++;
	}

	return count;
}
