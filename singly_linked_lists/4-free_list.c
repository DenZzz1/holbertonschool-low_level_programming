#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Description: This function frees all the nodes in a singly linked list.
 * For each node, it frees the duplicated string first, then the node itself.
 * This prevents memory leaks.
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
