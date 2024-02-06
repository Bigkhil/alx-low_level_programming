#include "lists.h"
/**
 * sum_listint - function to add node's numbers
 * @head: pointer to pointer
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
