#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the first node of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	long int count;

	while (head)
	{
		count = head - head->next;
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (count > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (i);
}

