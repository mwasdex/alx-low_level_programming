#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list_t list
 * @h : head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
