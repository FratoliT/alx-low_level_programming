#include "lists.h"

/**
 * add_nodeint - adds a new node on the begining of the list
 * @head: pointer to the first node
 * @n: data to be inserted in the new node
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head =  new;

	return (new);
}

