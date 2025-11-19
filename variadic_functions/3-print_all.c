#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* imprime un entier */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/* imprime un caractère */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/* imprime une chaîne */
void print_string(va_list args)
{
	char *z = va_arg(args, char *);
	if (z)
		printf("%s", z);
	else
		printf("(nil)");
}

/* imprime tout ce qui est passé */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", print_char}, {"i", print_int}, {"s", print_string}, {NULL, NULL}
	};
	va_list args;
	unsigned int i = 0, j;
	const char *sep = "";

	va_start(args, format);
	while (format && format[i])        /* 1er while */
	{
		j = 0;
		while (types[j].t)             /* 2e while */
		{
			if (*(types[j].t) == format[i])  /* 1er if */
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
