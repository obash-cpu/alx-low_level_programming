#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - add a node at head of d list
 * @head: the head
 * @n: the int to add
 * Return: addy of new node or NULL on fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
