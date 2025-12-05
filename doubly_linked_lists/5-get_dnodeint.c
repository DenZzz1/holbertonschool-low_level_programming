#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to retrieve, starting from 0
 *
 * Description: This function traverses the doubly linked list to find
 * the node at the specified index. Index 0 is the first node, index 1
 * is the second node, etc. If the index is out of bounds, returns NULL.
 *
 * Return: pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	return (head);
}
