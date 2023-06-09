#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in the list
 * @h: first pointer
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;


	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
