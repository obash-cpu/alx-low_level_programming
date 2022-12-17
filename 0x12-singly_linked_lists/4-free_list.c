#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: head of the lin ked list
 * Return: no return
 */
void free_list(list_t *head);
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
