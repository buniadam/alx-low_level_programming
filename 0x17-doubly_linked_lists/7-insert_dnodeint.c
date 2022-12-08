#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * in a doubly linked list
 * @h: double pointer to the list
 * @idx: index of the node to insert
 * @n: data to insert
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *temp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new || !h)
		return (NULL);

