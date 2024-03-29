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
	listint_t *curr = *head, *temp = NULL, *new = malloc(sizeof(listint_t));

	if (new == NULL || (*head == NULL && idx != 0))
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (curr != NULL && cntr < idx && *head != NULL)
	{
		temp = curr;
		curr = curr->next;
		cntr++;
	}
	if (cntr == idx && *head != NULL)
	{
		new->next = curr;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
