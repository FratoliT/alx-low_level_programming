#include "lists.h"
/**
 * pop_listint - delete the head node of the linked list
 * @ head: the first pointer
 * Return: the data that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;


	if (!head || !*head)
		return (0);
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;


	return (i);
}
