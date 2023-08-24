#include <stdlib.h>
#include "lists.h"

/**
 * Return the number of elements in a linked list.
 *
 * @param h Pointer to the list_t list.
 * @return The number of elements in the list.
 */
size_t countElementsInList(const list_t *h)
{
    size_t elementCount = 0;

    for (; h != NULL; h = h->next)
    {
        elementCount++;
    }

    return (elementCount);
}
