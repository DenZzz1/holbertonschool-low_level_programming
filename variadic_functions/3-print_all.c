#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A string of characters representing types:
 * c' = char, 'i' = integer, 'f' = float, 's' = char *.
 * Any other character is ignored.
 * If a string argument is NULL, prints "(nil)".
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *str;
char c;
int integer;
double f;
const char *sep = "";
va_start(args, format);
/* Loop through format string */
while (format != NULL && format[i] != '\0')
{
if (format[i] == 'c')
{
c = (char) va_arg(args, int);
printf("%s%c", sep, c);
sep = ", ";
}
if (format[i] == 'i')
{
nteger = va_arg(args, int);
printf("%s%d", sep, integer);
sep = ", ";
}
if (format[i] == 'f')
{
f = va_arg(args, double);
printf("%s%f", sep, f);
sep = ", ";
}
if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
printf("%s(nil)", sep);
else
printf("%s%s", sep, str);
sep = ", ";
}
i++;
}
va_end(args);
printf("\n");
}