#include "lists.h"
/**
 * listint_len - function to print length linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t cntr = 0;

	while (h != NULL)
	{
		h = h->next;
		cntr++;
	}
	return (cntr);
}
