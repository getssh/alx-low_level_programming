#include "lists.h"
/**
  * free_listint2 - frees list and set head to NULL
  * @head: head of the list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
