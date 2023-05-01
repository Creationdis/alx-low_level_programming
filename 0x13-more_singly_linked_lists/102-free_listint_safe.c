#include "lists.h"

/**
 * free_listint_safe - frees a linked list safely.
 * @head: head of a list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nnodes = 0;
	listint_t *current, *next;
	listp_t *hptr = NULL, *new = NULL;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;

	while (current != NULL)
	{
		next = current->next;

		new = malloc(sizeof(listp_t));
		if (new == NULL)
		{
			free_listp(&hptr);
			exit(98);
		}
		new->ptr = (void *)current;
		new->next = hptr;
		hptr = new;

		if (check_cycle(hptr) == 1)
		{
			free_listp(&hptr);
			*head = NULL;
			return (nnodes);
		}

		free(*head);
		*head = NULL;
		*head = next;
		nnodes++;
		current = next;
	}
	free_listp(&hptr);
	*head = NULL;
	return (nnodes);
}


