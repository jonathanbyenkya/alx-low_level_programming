#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      while looping through the list
 * @head: A pointer to the first node of the list
 *
 * Return: The number of unique nodes in the least or 
 *         NULL if none exist
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *right, *left;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	right = head->next;
	left = (head->next)->next;

	while (left)
	{
		if (right == left)
		{
			right = head;
			while (right != left)
			{
				nodes++;
				right = right->next;
				left = left->next;
			}

			right = right->next;
			while (right != left)
			{
				nodes++;
				right = right->next;
			}

			return (nodes);
		}

		right = right->next;
		left = (left->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: A pointer to the first node in the list
 *
 * Return: number of nodes in the list.
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}}
