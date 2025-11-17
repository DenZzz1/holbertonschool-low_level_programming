#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - checks if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_98(int elem)
{
    return (elem == 98);
}

/**
 * is_strictly_positive - checks if a number is strictly positive
 * @elem: the integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * abs_is_98 - checks if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 1 if true, 0 otherwise
 */
int abs_is_98(int elem)
{
    return (elem == 98 || elem == -98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, -1024, 98, 98, -123, 84, 625, 532, -921,
                     431, 36, -72, 54, -98, 98, -1};

    printf("%d\n", int_index(array, 20, is_98));
    printf("%d\n", int_index(array, 20, abs_is_98));
    printf("%d\n", int_index(array, 20, is_strictly_positive));
    return (0);
}