#include "lists.h"
/**
 * get_nodeint_at_index - finds the node at a given
 *                        index in a list
 * @head : pointer to the first node of a list.
 *
 * @index: index of the node to be found.
 *
 * Return: pointer to the located node
 *         or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	head = head->next;

	if (i < index)
	return (NULL);

	return (head);
}
