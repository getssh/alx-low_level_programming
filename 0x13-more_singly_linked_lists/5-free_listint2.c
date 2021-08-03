#include "lists.h"
/**
  * free_listint2 - frees list and set head to NULL
  * @head: head of the list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *head2;

	while (head2 != NULL)
	{
		head2 = *head;
		temp = head2->next;
		free(*head);
		head2 = temp;
	}
	*head = NULL;
}
