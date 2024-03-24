#include "lists.h"
/**
 * dlistint_len - function to print length of linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
