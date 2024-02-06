#include "lists.h"
/**
 * free_list - function to free list
 * @head: pointer to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr = head;

	if (head != NULL)
	{
		while (curr->next != NULL)
		{
			head = head->next;
			free(curr);
			curr = head;
		}
		free(curr);
	}
}
