#include "lists.h"
/**
  * print_listint - print all data in the linkedlist node
  * @h: head of the list
  * Return: sizr of the node
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
