#ifndef SORT_H
#define SORT_H

typedef enum bool
{
	false = 0,
	true
} bool;

void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

#endif
