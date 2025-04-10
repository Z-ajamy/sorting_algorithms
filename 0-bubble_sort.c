#include"sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int flag = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                flag = 1;
            }
            
            print_array(array, size);
        }
        if (!flag)
            break;
    }
    
}

void swap(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
