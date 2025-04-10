#include"sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int flag = 0;

    if (!array || size <= 0)
        return;
    
    for (i = 0; i < size; i++)
    {
        flag = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
                print_array(array, size);
                flag = 1;
            }
            
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
