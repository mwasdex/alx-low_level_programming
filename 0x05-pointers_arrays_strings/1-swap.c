/**
* swap_int - swaps values of two integers.
* @a: variable.
* @b: variable.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
