#include "lists.h"

/**
 * list_len - returns the nmber of elements in alist
 * @h: singly linked list
 * Return: nu,ber of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
