#include "lists.h"

/**
 * reverse_listint - reverses the order of a list.
 *
 * @head: pointer ti the first node of a list.
 *
 * Return: pointer to the first node of the list
 *         in reversed order.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *header;
	listint_t *footer;

	header = NULL;
	footer = NULL;

	while (*head != NULL)
	{
		footer = (*head)->next;
		(*head)->next = header;
		header = *head;
		*head = footer;
	}

	*head = header;
	return (*head);
}
