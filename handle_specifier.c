#include "main.h"
#include <stdarg.h>

/**
 * handle_specifier - Handle conversion specifier
 * @specifier: Conversion specifier character
 * @args: Variable arguments list
 *
 * Return: Number of characters printed for this specifier
 */

int handle_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 's':
			return print_str(va_arg(args, char *));

		default:

			putchar('%');
			putchar(specifier);
			return (2);
	}
}
