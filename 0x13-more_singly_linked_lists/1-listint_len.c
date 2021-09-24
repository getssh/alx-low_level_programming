#include "lists.h"
/**
  * listint_len - length of the nodes
  * @h: head of the list
  * Return: number of total nodes
  */
size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
