#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node
 * @head: the head of the list
 * @index: the number of the node to get
 * Return: the addy of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current != NULL)
		return (current);
	else
		return (NULL);
}
