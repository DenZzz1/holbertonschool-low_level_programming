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
/**
* print_char - prints a char
* @args: the list of args
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
* print_string - prints a string
* @args: the list of args
*/
void print_string(va_list args)
{
	char z = va_arg(args, char);

	if (z)
	{
		printf("%s", z);
/**
* print_all - prints all
* @format: formats of arg
*/
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL}
}
