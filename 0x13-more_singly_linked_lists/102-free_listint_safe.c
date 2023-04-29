#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to the first node of the list
 *
 * Return: The number of nodes in the list that were freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;

while (current != NULL)
{
tmp = current;
current = current->next;
count++;
free(tmp);

if (current == *h)
{
*h = NULL;
break;
}
}

return (count);
}

