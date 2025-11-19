#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name using a callback function
 * @name: pointer to the name to print
 * @f: pointer to the function to use for printing
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
