#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: is a pointer type char
 * @src: is a pointer type char
 * @n: is a int variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

int l;

for (l = 0; l < n && src[l] != '\0'; l++)
dest[l] = src[l];

for ( ; l < n; l++)
dest[l] = '\0';

return (dest);
}
