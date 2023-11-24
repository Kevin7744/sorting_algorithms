#include "sort.h"

/**
 * swap_ints - swaps two integers in an array
 * @a: First interger to swap
 * @b: Second integer to swap
 **/
 void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * Bubble_sort - Sorts an array of integers in ascending order
 * @*array: array to be sorted
 * @size: number of elements in the array
 * return: array after being sorted
 **/
 void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if(array == NULL || size < 2)
		return;
	while(bubbly == false)
	{
		bubbly = true;
		for(i = 0; i < len - 1;i++){
			if (array[i] > array[i+1]){
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
