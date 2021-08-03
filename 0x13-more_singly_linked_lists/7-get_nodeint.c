#include "lists.h"
/**
  * get_nodeint_at_index - find and return the element at index
  * @head: head of the linked list
  * @index: index of the list starting from 0
  * Return: the element at that index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		free(head);
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
			return (head->next);
		i++;
		head = head->next;
	}

	return (NULL);
}
