#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Description: This function frees all the nodes in a doubly linked list.
 * For each node, it saves the current node, moves to the next one,
 * then frees the saved node. This prevents accessing freed memory.
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
