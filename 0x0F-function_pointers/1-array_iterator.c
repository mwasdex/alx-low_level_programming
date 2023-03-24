#include <stdio.h>

/**
 * array_iterator - Exucute function given as a par on each elm of array
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @action: Type pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
