#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index
 * 
 * Return: 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
