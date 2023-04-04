#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
    size_t size = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        size++;
    }
    return (size);
}