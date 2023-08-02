/*
 * File: 104-add_nodeint.c
 * Author: Hicham
 */

#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer to the first node in the list.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 *
 * Description:
 * This function adds a new node with the given data at the beginning of
 * the listint_t linked list. It allocates memory for the new node, sets
 * its data (n) to the given value, and inserts it at the beginning of the list.
 * The head pointer is updated to point to the new node, making it the new head
 * of the list. If memory allocation fails, the function returns NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
