/*
 * File: 6-pop_listint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 *
 * Description:
 * This function removes the head node of the linked list and frees the memory
 * occupied by the removed node. If the list is empty, it returns 0. Otherwise,
 * it returns the data (n) of the head node before deletion.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
