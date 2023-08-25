#include "lists.h"
#include <string.h>

/**
 * add_node - Add new node at the beginning
 *            of the list_t lists.
 * @head: A pointera to head of list_t lista.
 * @str: The string added to list_t lists.
 *
 * Return: If function fail - NULL.
 *         Otherwise - address of new elements.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}


	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
