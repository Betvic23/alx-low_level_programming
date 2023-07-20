#include "function_pointers.h"
/**
 * array_iterator - execute a function
 * @array: int value
 * @size: unsigned int
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
		action(array[a]);
}
