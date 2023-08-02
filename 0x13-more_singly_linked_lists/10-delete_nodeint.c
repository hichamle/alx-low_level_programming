/*
 * File: 10-delete_nodeint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 *
 * Description:
 * This function deletes the node at the specified index in the listint_t linked
 * list. If the index is 0, the head node is deleted, and the new head becomes
 * the next node. If the index is out of the list's range, the function returns -1.
 * Otherwise, it deletes the node at the specified position and returns 1 to indicate
 * successful deletion.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
