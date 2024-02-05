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
	list_t *curr = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (curr != NULL)
	{
		curr = curr->next;
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		return (NULL);
	}
	new->len = strlen(str);
	curr->next = new;
	new->next = NULL;
	return (new);
}
