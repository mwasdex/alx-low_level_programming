#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: is a pointer type char
 * @n: is a pointer type char
 * Return: Always 0.
 *
 */
void reverse_array(int *a, int n)
{
int result[700];
int l;
n--;

for (l = 0; l <= n; l++)
result[l] = a[l];

for (l = 0; l <= n; l++)
a[l] = result[n - l];
}
