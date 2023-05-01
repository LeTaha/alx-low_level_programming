#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (value);
}
