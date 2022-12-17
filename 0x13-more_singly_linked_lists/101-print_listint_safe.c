#include "lists.h"
/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t a;
	listint_t *b = (listint_t *)head;

	a = 0;
	while (b && b > b->next)
	{
		printf("[%p] %d\n", (void *)b, b->n);
		b = b->next;
		a++;
	}
	if (b)
	{
		printf("[%p] %d\n", (void *)b, b->n);
		printf("-> [%p] %d\n", (void *)b->next, b->next->n);
		a++;
	}
	return (a);
}
