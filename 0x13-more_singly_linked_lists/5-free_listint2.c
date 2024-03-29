#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: double pointer to the head of list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	for (temp = *head; *head != NULL; temp = *head)
	{
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
