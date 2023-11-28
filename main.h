#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - struct to represent a format specifier
 * @specifier: the format specifier character ('c', 's', or '%')
 * @printer: function pointer to the corresponding printing function
 */

typedef struct format
{
    char specifier;
    int (*printer)(va_list);
} format_specifier_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif
