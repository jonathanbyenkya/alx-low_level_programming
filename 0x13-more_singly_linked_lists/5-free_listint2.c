#include "lists.h"

/**
 * free_listint2 - frees a linked list and
 *                 sets the value of head to NULL.
 * @head: pointer to the first node of a list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}

