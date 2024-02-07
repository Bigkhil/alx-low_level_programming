#include "lists.h"
/**
 * insert_nodeint_at_index - function to add node to certain index
 * @head: pointer to pointer
 * @index: index of node
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cntr = 0;
	listint_t *curr = *head, *temp = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free(curr);
		*head = (*head)->next;
		return (1);
	}
	while (cntr != index && curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		cntr++;
	}
	if (cntr == index)
	{
		temp->next = curr->next;
		free(curr);
		return (1);
	}
	return (-1);
}
