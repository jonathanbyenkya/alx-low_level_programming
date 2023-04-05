#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at
 *                           a given index position
 * @head: pointer to the first node of a list.
 *
 * @index: index position where the new node will
 *         be inserted.
 *
 * @n: value of the node to be added or inserted.
 *
 * Return: the address of the new node or else
 *         NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (index == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new_node->next = temp->next;
	copy->next = new_node;

	return (new_node);
}
