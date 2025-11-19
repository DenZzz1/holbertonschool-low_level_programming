#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_int - prints an int
* @args: the list of args
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void print_string(va_list args)
{
	char *z = va_arg(args, char *);
	if (z)
		printf("%s", z);
	else
		printf("(nil)");
}
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", print_char}, {"i", print_int}, {"s", print_string}, {NULL, NULL}
	};
	va_list args;
	unsigned int i = 0, j;
	const char *sep = "";
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].t)
		{
			if (*(types[j].t) == format[i])
			{
				printf("%s", sep);
				types[j].f(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}