#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any of c, i, f, s types
 * @format: format string containing type specifiers
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    unsigned int i = 0;
    const char *sep = "";
    char *str;

    va_start(ap, format);
    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            printf("%s", sep);
            if (format[i] == 'c')
                printf("%c", va_arg(ap, int));
            if (format[i] == 'i')
                printf("%d", va_arg(ap, int));
            if (format[i] == 'f')
                printf("%f", va_arg(ap, double));
            if (format[i] == 's')
            {
                str = va_arg(ap, char *);
                printf("%s", str ? str : "(nil)");
            }
            sep = ", ";
        }
        i++;
    }
    va_end(ap);
    printf("\n");
}
