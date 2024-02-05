#include "lists.h"
/**
 * add_node_end - function to add node to the beginning of the list
 * @head: pointer to head
 * @str: string
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *next = *head;

	if (new == NULL)
	{
		return (NULL);
	}
	while (next->next != NULL)
	{
		next = next->next;
	}
	new->next = NULL;
	new->str = strdup(str);
	next->next = new;
	return (new);
}
