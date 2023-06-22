#include "function_pointers.h"

/**
 * int_index - function that search for an integer
 * @array: Type int array pointer
 * @size: Type pointer size of the array
 * @cmp: Type pointer to the function compare values
 * Return: return -1 if size <=0 or elem no matches -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
