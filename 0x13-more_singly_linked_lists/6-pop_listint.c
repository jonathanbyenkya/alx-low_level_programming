#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 *
 * @head: pointer to the first node of a list
 *
 * Return: the head node's data or else 0 if
 *         the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;

	*head = (*head)->next;

	free(temp);

	return (n);
}
