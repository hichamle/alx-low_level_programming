/*
 * File: 103-find_loop.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 *
 * Description:
 * This function finds and returns the address of the node where the loop starts
 * in the listint_t linked list. If there is no loop in the list, it returns NULL.
 * The function uses Floyd's cycle-finding algorithm (tortoise and hare) to detect
 * the presence of a loop. If a loop is detected, the function resets the tortoise
 * to the head and moves both the tortoise and hare one step at a time until they
 * meet again, which indicates the start of the loop. If no loop is detected, the
 * function returns NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
