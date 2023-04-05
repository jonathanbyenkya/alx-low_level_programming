#include "lists.h"

/**
 * add_nodeint - func dds a new node at the beginning of a listint_t list
 * @head: pointer to the first node of the list
 * @n: an interger to be added to a new node
 * Return: the address of the new element or else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
