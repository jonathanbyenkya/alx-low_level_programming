#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: pointer to the first node of the list
 *
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

