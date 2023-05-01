#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *turtle, *hare;
    size_t count = 0;

    if (!head)
        exit(98);

    turtle = head;
    hare = head;

    while (hare && hare->next)
    {
        printf("[%p] %d\n", (void *)turtle, turtle->n);
        count++;
        turtle = turtle->next;
        hare = hare->next->next;

        if (turtle == hare)
        {
            printf("[%p] %d\n", (void *)turtle, turtle->n);
            count++;
            printf("-> [%p] %d\n", (void *)hare->next, hare->next->n);
            break;
        }
    }

    if (!hare || !hare->next)
    {
        while (turtle)
        {
            printf("[%p] %d\n", (void *)turtle, turtle->n);
            count++;
            turtle = turtle->next;
        }
    }

    return (count);
}

