#include"sort.h"

void selection_sort(int *array, size_t size)
{
    size_t i;

    for (i = 1; i < size; i++)
    {
        int key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[i] = array[j];
            array[j] = key;
            j -= 1;
        }
    }
}
