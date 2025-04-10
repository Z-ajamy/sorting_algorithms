#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using Bubble sort
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Description: This function repeatedly steps through the list,
 * compares adjacent elements, and swaps them if they are in the wrong order.
 * The process is repeated until the array is sorted.
 * The function prints the array each time a swap is made.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag = 0;  /* Flag to detect if any swap occurred during a pass */

	if (!array || size <= 0)
		return;

	/* Outer loop to control the number of passes */
	for (i = 0; i < size; i++)
	{
		flag = 0;

		/* Inner loop to compare adjacent elements */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);  /* Print array after each swap */
				flag = 1;  /* Set flag if a swap occurred */
			}
		}

		/* If no swaps occurred, the array is already sorted */
		if (!flag)
			break;
	}
}

/**
 * swap - Swaps two integers in memory
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Description: This function exchanges the values of the two integers
 * pointed to by @a and @b using a temporary variable.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
