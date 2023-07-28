#include <stdlib.h>
#include "lists.h"
/**
 * list_len - return element in a linklist
 * @h: pointer
 * Return: p (element in h)
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}
