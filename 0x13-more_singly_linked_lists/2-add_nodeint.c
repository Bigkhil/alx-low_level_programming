#include "lists.h"
/**
 * add_nodeint - function to print length linked list
 * @head: pointer to node
 * @n: int
 * Return: pointer to new node in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
