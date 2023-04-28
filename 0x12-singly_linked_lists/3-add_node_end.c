#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes, *temps;
	size_t str_len = 0;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		str_len = 0;

	/*count length of string*/
	while (str[str_len] != '\0')
		str_len++;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->str = strdup(str);
	new_nodes->len = str_len;
	new_nodes->next = NULL;

	/*copy our starting node pointer to temp*/
	temps = *head;

	/*if temp is NULL place our new_node at the beginning of the list*/
	/*else if its not null we place our new_node to temp->next hence*/
	/*adding our new_node at the end of the list*/
	if (temps == NULL)
		*head = new_nodes;
	else
	{
		/**
		 * we iterate pointer next addr if its not NULL our temp addr
		 * points to the next addr or the next node.
		 */
		while (temps->next != NULL)
			temps = temps->next;
		temps->next = new_nodes;
	}

	return (*head);
}
