#include "lists.h"

/**
 * sum_listint - computes the sum of all the data (n) of a linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: the sum of the list or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
