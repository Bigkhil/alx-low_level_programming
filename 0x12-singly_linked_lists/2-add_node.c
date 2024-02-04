#include "lists.h"
/**
 * add_node - function to add node to the beginning of the list
 * @head: pointer to head
 * @str: string
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	*head = new;
	new->str = strdup(str);
	free(new);
	free(new->str);
	return (new);
}
