#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a list.
 * @head: pointer to the first node of a list
 *
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successfull & 0 if fail.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del_node = *head;
	unsigned int node;

	if (del_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (del_node->next == NULL)
			return (-1);

		del_node = del_node->next;
	}

	temp = del_node->next;
	del_node->next = temp->next;
	free(temp);
	return (1);
}
