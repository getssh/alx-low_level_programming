#include "lists.h"
/**
  * print_list - printout the data in the nodes
  * @h: pointer to the head of the linked list
  * Return: number of the nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
