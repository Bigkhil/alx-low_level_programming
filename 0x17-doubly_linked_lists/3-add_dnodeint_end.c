#include "lists.h"
/**
 * add_dnodeint_end - function to add node at the end of the list
 * @head: pointer to node
 * @n: data
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
	{
		new->prev = (*head);
		(*head) = new;
		return (new);
	}
	while ((*head) != NULL)
		(*head) = (*head)->next;
	new->prev = (*head);
	(*head)->next = new;
	return(new);
}
