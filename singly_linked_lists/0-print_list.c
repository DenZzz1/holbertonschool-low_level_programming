#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Description: This function traverses a singly linked list and prints
 * each node's length and string. If str is NULL, it prints "[0] (nil)".
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)

{
if (h->str == NULL)

printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;

}

return (count);
}