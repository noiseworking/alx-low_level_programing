#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: list linked of type listint_t.
 *
 * Return: number of nodes list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
