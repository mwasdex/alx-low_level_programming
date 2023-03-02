#include "main.h"

/**
 * leet -  function that encodes a string into 1337..
 * @a: is a pointer type char
 * Return: Always 0.
 */
char *leet(char *a)
{
char leet[] = "aAeEoOtTlL";
char chan[] = "4433007711";
int i, j;

for (i = 0; a[i] != '\0'; i++)
{

for (j = 0; leet[j] != '\0'; j++)
{
if (a[i] == leet[j])
a[i] = chan[j];
}

}
return (a);
}
