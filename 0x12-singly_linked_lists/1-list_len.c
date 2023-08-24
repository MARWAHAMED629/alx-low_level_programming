#include <stdlib.h>
#include "lists.h"

/**
 * count_list_elements - Counts the number of elements in a linked list.
 * @head: Pointer to the start of the list.
 * Return: Number of elements in the list.
 */
size_t count_list_elements(const list_t *head)
{
    size_t count = 0;

    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
