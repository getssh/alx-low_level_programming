#include "lists.h"
/**
  * add_nodeint_end - add node at the end
  * @n: value to be added at z last node
  * @head: head of the list
  * Return: address to the node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = malloc(sizeof(listint_t));
		if (last_node == NULL)
		{
			free(last_node);
			return (NULL);
		}
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->n = n;
	}

	return (*head);
}
