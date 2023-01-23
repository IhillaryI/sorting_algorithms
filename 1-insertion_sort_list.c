#include "sort.h"
#include <stdio.h>

void swap(listint_t *, listint_t *);

/**
 * insertion_sort_list - sorts a doubly linked list
 * Using insertion sort
 * @list: a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i;
	listint_t *j;

	if (list != NULL && *list != NULL)
	{
		i = (*list)->next;
		while (i != NULL)
		{
			j = i;
			while (j->prev != NULL)
			{
				if (j->n < j->prev->n)
				{
					swap(j, j->prev);
					if (j->prev == NULL)
						*list = j;
					print_list(*list);
				}
				else
					j = j->prev;
			}
			i = i->next;
		}
	}
}

/**
 * swap - swaps two doubly linked list element.
 * @x: list element
 * @y: list element
 */
void swap(listint_t *x, listint_t *y)
{
	y->next = x->next;
	if (y->next != NULL)
		y->next->prev = y;
	x->prev = y->prev;
	if (x->prev != NULL)
		x->prev->next = x;
	x->next = y;
	y->prev = x;
}
