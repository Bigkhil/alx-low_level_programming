#include "lists.h"
/**
 * print_list - function to print nodes of linked list
 * @h: pointer to node
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	char *s;
	unsigned int x;
	size_t cntr = 0;

	while (h != NULL)
	{
		s = h->str;
		x = h->len;
		if (h->str == NULL)
		{
			s = "(nil)";
			x = 0;
		}
		printf("[%u] %s\n", x, s);
		h = h->next;
		cntr++;
	}
	return (cntr);
}
