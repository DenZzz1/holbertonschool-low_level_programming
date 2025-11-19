#include "variadic_functions.h"

/* test de print_all */
int main(void)
{
	print_all("ceis", 'B', 3, "Holberton");
	print_all("sci", NULL, 'A', 42);
	print_all(NULL);
	print_all("iic", 1, 2, 'Z');
	return (0);
}
