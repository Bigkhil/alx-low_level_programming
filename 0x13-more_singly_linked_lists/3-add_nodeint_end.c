#include "lists.h"
/**
 * add_nodeint_end - function to add node the end of linked list
 * @head: pointer to node
 * @n: int
 * Return: pointer to new node in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (curr == NULL)
		curr = new;
	else
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new;
	}
	return (new);
}
