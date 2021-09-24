#include "lists.h"
/**
 *dlistint_len - count the number of elements in linked list
 *@h:Pointer head
 *Return:Numbe of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	if (temp == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
