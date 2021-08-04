#include "lists.h"
/**
  * reverse_listint - reverse a linked list
  * @head: head of the list
  * Return: the head of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;
	listint_t *nex = NULL;

	if (*head == NULL || head == NULL)
	{
		free(*head);
		*head = NULL;
		return (*head);
	}

	while (curr != NULL)
	{
		nex = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nex;
	}
	*head = prev;

	return (*head);
}
