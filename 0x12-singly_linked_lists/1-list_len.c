#include "lists.h"
/**
  * list_len - find the number of nodes in a list
  * @h: head of the node
  * Return: number of nodes in a list
  */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
