#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curent, *prev;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;

	while (current)
	{
		prev = current->prev;

		while (prev && current->n < prev->n)
		{
			prev->next = current->next;
			if (current->next)
				current->next->prev = prev;
			current->prev = prev->prev;
			current->next = prev;
			
			if (prev->prev)
				prev->prev->next = current;
			prev->prev = current;
			
			if (!current->prev)
				*list = current;

			print_list(*list);
			prev = current->prev;
		}
		current = current->next;
	}
}
