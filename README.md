I_printf Function

The _printf function is a custom implementation of the printf function in C, which allows printing formatted output to the standard output (usually the console). The function provides support for various format specifiers, such as %d for integers, %s for strings, %c for characters, %u for unsigned integers, %x and %X for hexadecimal, %o for octal, and %% for the percent symbol, among others. Usage

c

#include "main.h"

int _printf(const char *format, ...);

To use the _printf function, include "main.h" and call it with a format string as the first argument, followed by any additional arguments required by the format specifiers in the format string. Format Specifiers

The following format specifiers are supported by the _printf function:

%c: Character - Prints a single character.
%s: String - Prints a null-terminated string.
%d or %i: Integer - Prints a signed decimal integer.
%u: Unsigned Integer - Prints an unsigned decimal integer.
%x and %X: Hexadecimal - Prints an unsigned integer in hexadecimal (lowercase or uppercase, respectively).
%o: Octal - Prints an unsigned integer in octal.
%%: Percent - Prints a percent symbol.

Examples

c

int main(void) { int len; int len2; unsigned int ui; void *addr;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
ui = (unsigned int)INT_MAX + 1024;
addr = (void *)0x7ffe637541f0;
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Negative:[%d]\n", -762534);
printf("Negative:[%d]\n", -762534);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return (0);

}

To compile this code, it is used "$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c".

The above code demonstrates various uses of the _printf function and how it compares to the standard printf function. License

This project is licensed under the MIT License. See the LICENSE file for details. Contributing

Contributions are welcome! If you find any issues or want to add new features, feel free to create a pull request. Support

If you encounter any problems or have questions, please feel free to open an issue or contact the maintainer directly. Acknowledgements

Special thanks to the contributors who helped make this project possible. Disclaimer

This project is provided "as is," without warranty of any kind, express or implied. Use it at your own risk.

Replace the placeholders with relevant details, such as your GitHub username and repository name. Additionally, ensure that you have provided accurate information about the project, its usage, and its capabilities. Feel free to customize the README according to your specific project needs.
