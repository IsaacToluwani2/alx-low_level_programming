#include "lists.h"

/**
 * listint_len - return number of elements in
 * a link list.
 * @h: heads of list.
 *
 * Return: number of node.
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nnodes++;
	}
	return (nnodes);
}
