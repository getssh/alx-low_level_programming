#include "lists.h"

/**
 *print_dlistint - prints doubly linked list
 *@h: head of hte linked list
 *Return:Number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i =  0;

	if (temp == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
