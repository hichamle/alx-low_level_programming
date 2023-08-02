/*
 * File: 5-free_listint2.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Description:
 * This function frees the memory occupied by each node in the linked list
 * and sets the head pointer to NULL. It ensures that all memory associated
 * with the list is deallocated properly.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
