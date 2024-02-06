#include "lists.h"
/**
 * print_listint - function to print nodes of linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int x;
	size_t cntr = 0;

	while (h != NULL)
	{
		x = h->n;
		printf("%d\n", x);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
