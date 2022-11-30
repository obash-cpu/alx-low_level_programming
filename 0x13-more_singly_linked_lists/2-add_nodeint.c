#include "lists.h"
/**
 * add_nodeint - adds a new node at the beggining
 * @head: a pointer to the address
 * @n: the integer to the new node
 * Return: NULL if the function fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL)

			new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
