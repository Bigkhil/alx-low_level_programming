#include "lists.h"
/**
 * list_len - function to print nodes of linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		h = h->next;
		cntr++;
	}
	return (cntr);
}
