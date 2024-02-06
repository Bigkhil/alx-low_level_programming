#include "lists.h"
/**
 * pop_listint - function to delete head node
 * @head: pointer to pointer
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *curr = *head;
	int x;

	if (curr == NULL)
	{
		return (0);
	}
	x = curr->n;
	*head = (*head)->next;
	return (x);
}
