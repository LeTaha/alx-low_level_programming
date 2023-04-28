#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t str_lens = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_lens = 0;

	/*count length of string*/
	while (str[str_lens] != '\0')
		str_lens++;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	/**
	 * initialize the next addr of new_node
	 * to NULL if head is NULL, if it's not
	 * move the first node to the addr of new_node
	 * ->next hence adding new_node at the beginning
	 *  of the list
	 */
	if (*head == NULL)
		new_nodes->next = NULL;
	else
		new_nodes->next = *head;

	new_nodes->str = strdup(str);
	new_nodes->len = str_lens;
	*head = new_nodes;

	return (*head);
}
