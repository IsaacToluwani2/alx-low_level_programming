#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of a link list
 * @head: head of the list.
 * @index: index of a node.
 *
 * Return: nth node. If the node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
