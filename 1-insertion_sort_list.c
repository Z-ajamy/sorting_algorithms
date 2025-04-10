#include"sort.h"

void insertion_sort_list(listint_t **list)
{
    int key;
    listint_t *ptr, *p;

    if (!list || !(*list)->next)
        return;
    
    ptr = (*list)->next;

    while (ptr)
    {
        key = ptr->n;
        p = ptr->prev;
        while (p && p->n > key)
        {
            ptr->n = p->n;
            p->n = key;
            p = p->prev;
        }
        ptr = ptr->next;
    }
}

void swap_node();
