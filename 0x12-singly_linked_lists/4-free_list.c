#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *currente;

	/**
	 * while current head is not NULL
	 * set head as the next node and
	 * free the current node str then
	 * free current node.
	 */
	while ((currente = head) != NULL)
	{
		head = head->next;
		free(currente->str);
		free(currente);
	}
}
