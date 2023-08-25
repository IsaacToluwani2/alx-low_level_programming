#include "lists.h"

/**
 * list_len - Find number of the elements in
 *            the link list_t lists.
 * @h: The link list_t lists.
 * @elements: a node counter
 *
 * Return: The no of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
