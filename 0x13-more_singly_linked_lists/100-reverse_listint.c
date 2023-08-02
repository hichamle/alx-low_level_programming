/*
 * File: 100-reverse_listint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 *
 * Description:
 * This function reverses the order of the listint_t linked list by reversing the
 * pointers of the nodes. It traverses the list while reversing the connections
 * between the nodes, starting from the head. The function returns a pointer to
 * the new head node, which will be the last node in the original list after the
 * reversal is complete.
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
