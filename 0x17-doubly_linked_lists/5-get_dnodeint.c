#include "lists.h"
/**
 * get_dnodeint_at_index - function to nth node of a list
 * @head: pointer to node
 * @index: index of node
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}
	if (head != NULL)
		return (head);
	return (NULL);
}
