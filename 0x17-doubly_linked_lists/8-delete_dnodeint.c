#include "lists.h"
/**
 * delete_dnodeint_at_index - function to delete node from a list
 * @head: pointer to node
 * @index: index
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = (*head);

	if (head == NULL || (*head) == NULL)
		return (0);
	if (index == 0 && (*head) != NULL)
	{
		if (((*head)->next) == NULL)
		{
			(*head) = NULL;
			return (1);
		}
		((*head)->next)->prev = NULL;
		(*head) = (*head)->next;
		return (1);
	}
	while ((*head) != NULL && i != (index - 1))
	{
		i++;
		(*head) = (*head)->next;
	}
	if (i == (index - 1) && (*head) != NULL && (*head)->next != NULL)
	{
		(*head)->next = ((*head)->next)->next;
		if (((*head)->next)->next != NULL)
			(((*head)->next)->next)->prev = (*head);
		(*head) = curr;
		return (1);
	}
	(*head) = curr;
	return (0);
}
