#include "lists.h"
/**
 * sum_dlistint - function add the list
 * @head: pointer to node
 * Return: dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
