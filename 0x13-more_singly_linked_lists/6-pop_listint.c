#include "lists.h"
/**
 * pop_listint - function to delete head node
 * @head: pointer to pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int x = (*head)->n;

	if (curr == NULL)
	{
		return (0);
	}
	free(*head);
	*head = (*head)->next;
	return (x);
}
