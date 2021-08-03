#include "lists.h"
/**
  * add_nodeint - add a node at the begenning
  * @head: head of the list
  * @n: value to be assign ar the begginng
  * Return: added node pointer
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
