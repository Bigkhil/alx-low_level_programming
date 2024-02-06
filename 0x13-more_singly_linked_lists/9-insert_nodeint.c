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
	listint_t *curr = *head;

	if (new == NULL || (*head == NULL && idx != 0))
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (curr->next != NULL && cntr < idx && *head != NULL)
	{
		curr = curr->next;
		cntr++;
	}
	if (cntr == idx && *head != NULL)
	{
		new->next = curr->next;
		curr->next = new;
		return (new);
	}
	return (NULL);
}
