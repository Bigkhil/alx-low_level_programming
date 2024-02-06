#include "lists.h"
/**
 * free_listint - function to free linked list
 * @head: pointer to node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(head);
	}
}
