#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 *               data of a linked list.
 *
 * @head: pointer to the first node of a list
 *
 * Return: The sum of all data or else NULL.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
