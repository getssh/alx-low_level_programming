#include "lists.h"
/**
  * sum_listint - add all int data in the linked list
  * @head: head of the nodes
  * Return: sum of the values
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		free(head);
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
