#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything based on format string
 * @format: string with types: 'c', 'i', 'f', 's'
 */
void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0;
char *str;
const char *sep = "";
va_start(ap, format);
while (format && format[i])
{
if (format[i] == 'c')
{
printf("%s%c", sep, va_arg(ap, int));
sep = ", ";
}
if (format[i] == 'i' || format[i] == 'f' || format[i] == 's')
{
if (format[i] == 'i')
printf("%s%d", sep, va_arg(ap, int));
if (format[i] == 'f')
printf("%s%f", sep, va_arg(ap, double));
if (format[i] == 's')
{
str = va_arg(ap, char *);
printf("%s%s", sep, str ? str : "(nil)");
}
sep = ", ";
}
i++;
}
va_end(ap);
printf("\n");
}
