#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to a pointer to the head of the linked list.
 * @n: the value to be stored in the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        // Failed to allocate memory for the new node.
        return NULL;
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        // The list is empty, so the new node becomes the head.
        *head = new_node;
    } else {
        // Traverse the list to find the last node and append the new node.
        listint_t *current = *head;
        while (current->next) {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}
