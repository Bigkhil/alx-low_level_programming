#include "lists.h"
/**
 * get_nodeint_at_index - function to delete head node
 * @head: pointer to pointer
 * Return: int
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cntr = 0;
	listint_t *curr = head;

	if (head == NULL)
		return (NULL);
	while (cntr != index && curr->next != NULL)
	{
		cntr++;
		curr = curr->next;
	}
	if (cntr == index)
		return (curr);
	else
	{
		return (NULL);
	}
}
