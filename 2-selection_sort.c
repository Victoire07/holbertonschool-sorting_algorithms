#include "sort.h"
/**
 * selection_sort - Trie un tableau d'entiers dans l'ordre croissant
 * @array: Pointeur vers le tableau
 * @size: Nombre d'éléments dans le tableau
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t minimum_index;
	size_t j;
	int temporaire = 0;

	for (i = 0; i < size - 1; i++)
	{
		minimum_index = i;

	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[minimum_index])
		{
			minimum_index = j;
		}
	}
		if (minimum_index != i)
		{
			temporaire = (array[i]);
			array[i] = array[minimum_index];
			array[minimum_index] = temporaire;
			print_array(array, size);
		}
	}
}
