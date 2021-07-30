#include "lists.h"
/**
  * add_node_end - add node at the end
  * @head: head of the node
  * @str: string to be printed
  * Return: address of the last pointer
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *last_ptr;
	char *dupstr;
	int length;

	ptr = *head;
	last_ptr = malloc(sizeof(list_t));
	if (last_ptr == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(last_ptr);
		return (NULL);
	}

	dupstr = strdup(str);
	for (length = 0; dupstr[length] != '\0'; length++)
		;
	last_ptr->len = length;
	last_ptr->str = dupstr;
	last_ptr->next = NULL;

	if (*head == NULL)
		*head = last_ptr;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = last_ptr;
	}

	return (*head);
}
