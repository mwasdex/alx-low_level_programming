#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arry of chars, and initializes it with a char
 * @size: size of array
 * @c: specific char
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *arr;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (m = 0; m < size; m++)
		{
			*(arr + m) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
