/*
 * File: 7-get_nodeint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 *
 * Description:
 * This function traverses the list to locate the node at the given index
 * and returns a pointer to that node. The index starts at 0, so passing
 * 0 as the index will return the first node, 1 will return the second node,
 * and so on. If the index is out of the list's range, it returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
