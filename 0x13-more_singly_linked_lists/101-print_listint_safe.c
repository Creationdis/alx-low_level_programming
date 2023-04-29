#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t count = 0;

if (!head)
exit(98);

tortoise = hare = head;

while (tortoise && hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)
{
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
break;
}

printf("[%p] %d\n", (void *)tortoise, tortoise->n);
count++;
}

if (!hare || !hare->next)
printf("[%p] %d\n", (void *)tortoise, tortoise->n);

hare = head;

while (tortoise != hare && tortoise)
{
printf("[%p] %d\n", (void *)hare, hare->n);
count++;
hare = hare->next;
tortoise = tortoise->next;
}

if (tortoise == hare)
printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);

count++;

return (count);
}

