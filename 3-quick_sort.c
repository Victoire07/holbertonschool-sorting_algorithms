#include "sort.h"
/**
 * swap - Swap two elements in an array
 * @a: First element
 * @b: Second element
 */
void swap(int *a, int *b)
{
	if (a != b)
	{
		int tmp = *a;
		*a = *b;
		*b = tmp;
	}
}

/**
 * partition - Lomuto partition scheme
 * @array: The array to partition
 * @low: Start index of the sub-array
 * @high: End index of the sub-array (pivot)
 * @size: Size of the array (used for printing)
 *
 * Return: The final index of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}

	swap(&array[i + 1], &array[high]);
	if (i + 1 != high)
		print_array(array, size);

	return (i + 1);
}

/**
 * quick_sort_recursive - Recursively apply quick sort
 * @array: Array to sort
 * @low: Start index
 * @high: End index
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		/* Divise le tableau et trie chaque sous-partie */
		int pivot_index = partition(array, low, high, size);

		quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}
/**
 * quick_sort - Main function to sort the entire array
 * @array: The array to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
