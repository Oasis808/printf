#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom printf function to handle %d and %i conversion specifiers
 * @format: Format string with conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int num;

    va_start(args, format);

    while (*format)
    {
        if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
        {
            num = va_arg(args, int);
            printf("%d", num);
            count++;
            format += 2;
            continue;
        }
        putchar(*format++);
        count++;
    }

    va_end(args);

    return count;
}
