#include "lists.h"
/**
 * insert_nodeint_at_index - function to add node to certain index
 * @head: pointer to pointer
 * @idx: index of node
 * @n: number
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cntr = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if ((*head == NULL && idx != 0) || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	while (*head != NULL && cntr != idx)
	{
		*head = (*head)->next;
		cntr++;
	}
	if (cntr == idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	return (NULL);
}
