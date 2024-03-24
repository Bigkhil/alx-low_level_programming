#include "lists.h"
/**
 * add_dnodeint - function to add node to the beginning of the list
 * @head: pointer to node
 * @n: data
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	(*head)->prev = new;
	(*head) = &new;
	return (new);
}
