#include "lists.h"

/**
 * pop_listint - delete the head file of a node
 * @head: a pointer to the address of the head
 * Return; 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_next;
	int value;

	if (*head == NULL)

		return (0);

	temp_next = (*head)->next;
	value = (*head)->n;
	*head = (*head)->next;

	free(*head);
	*head = temp_next;

	return (value);
}
