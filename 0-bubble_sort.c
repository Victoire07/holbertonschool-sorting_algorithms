#include "sort.h"
/**
 * bubble_sort - Trie un tableau d'entiers en ordre croissant
 * @array: Pointeur vers le tableau
 * @size: Nombre d'éléments dans le tableau
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temporaire;
	int echange;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		echange = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				echange = 1;
				temporaire = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temporaire;
				print_array(array, size);
			}
			if (echange == 0)
			break;
		}
	}
}
