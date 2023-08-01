#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all element of the listint_t
 * @h: pointer to struct
 * Return: coun
 */
size_t print_listint(const listint_t *h)
{
	size_t coun;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		coun++;
		h = h->next;
	}
	return (coun);
}
