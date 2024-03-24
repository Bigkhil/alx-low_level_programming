#include "lists.h"
/**
 * free_dlistint - function to free the list
 * @head: pointer to node
 * Return: dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
