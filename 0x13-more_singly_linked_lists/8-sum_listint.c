/*
 * File: 8-sum_listint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the
 *               data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 *
 * Description:
 * This function calculates the sum of all the data (n) stored in the nodes
 * of the listint_t linked list. It traverses the list from the head to the
 * end, adding the value of the data in each node to a running total (sum).
 * If the list is empty (i.e., head is NULL), it returns 0. Otherwise, it
 * returns the computed sum of the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
