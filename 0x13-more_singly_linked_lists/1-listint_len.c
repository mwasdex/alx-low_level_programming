#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h : head of a linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
