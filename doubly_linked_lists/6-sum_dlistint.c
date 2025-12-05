#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Description: This function traverses the doubly linked list and adds
 * up all the integer values stored in each node. If the list is empty,
 * it returns 0.
 *
 * Return: sum of all the data (n) in the list, or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
