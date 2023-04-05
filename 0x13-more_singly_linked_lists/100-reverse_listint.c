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
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
