#include "lists.h"
/**
 * insert_dnodeint_at_index - function add the list
 * @h: pointer to node
 * @idx: index
 * @n: data
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = (*h), *new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
		return (NULL);
	while ((*h) != NULL && i != (idx - 1))
	{
		i++;
		(*h) = (*h)->next;
	}
	if (i == (idx - 1))
	{
		new->n = n;
		new->prev = (*h);
		if (((*h)->next) != NULL)
			((*h)->next)->prev = new;
		new->next = ((*h)->next);
		(*h)->next = new;
		(*h) = curr;
		return (new);
	}
	(*h) = curr;
	return (NULL);
}
