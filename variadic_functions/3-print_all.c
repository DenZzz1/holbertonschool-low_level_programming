#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on a format string.
 * @format: String where each char is a type: 'c', 'i', 'f', 's'.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *s;
char sep[] = ", ";
const char *psep = "";
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
printf("%s%c", psep, va_arg(args, int)), psep = sep;
if (format[i] == 'i' || format[i] == 'f' || format[i] == 's')
{
if (format[i] == 'i')
printf("%s%d", psep, va_arg(args, int));
if (format[i] == 'f')
printf("%s%f", psep, va_arg(args, double));
if (format[i] == 's')
{
s = va_arg(args, char *);
printf("%s%s", psep, s ? s : "(nil)");
}
psep = sep;
}
i++;
}
va_end(args);
printf("\n");
}
