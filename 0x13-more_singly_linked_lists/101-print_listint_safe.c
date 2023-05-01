#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *temp, *arr[1024];

if (head == NULL)
exit(98);

temp = head;
while (temp != NULL && i < 1024)
{
printf("[%p] %d\n", (void *)temp, temp->n);

arr[i] = temp;
i++;

temp = temp->next;
if (temp == head)
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
break;
}
}

if (i >= 1024)
{
fprintf(stderr, "Error: list is too long\n");
exit(98);
}

return (i);
}

