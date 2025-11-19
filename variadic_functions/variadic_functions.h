#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/* Structure pour associer un type à une fonction */
typedef struct types
{
char *t;
void (*f)(va_list);
} types_t;

/* Fonctions à utiliser */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
