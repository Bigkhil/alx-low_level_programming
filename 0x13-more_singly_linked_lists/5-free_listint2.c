#include "lists.h"
/**
 * free_listint2 - function to free linked list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

		while (*head != NULL && head != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		head = NULL;
}
