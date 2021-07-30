#include "lists.h"
/**
  * add_node - add node at the begenning of a list
  * @head: head of the list
  * @str: string to be printed
  * Return: address to the added node
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	char *dupstr;
	int length;

	if (ptr == NULL)
		return (NULL);
	ptr->next = *head;
	*head = ptr;

	dupstr = strdup(str);
	if (dupstr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = dupstr;
	for (length = 0; dupstr[length] != '\0'; length++)
		;
	ptr->len = length;

	return (*head);
}
