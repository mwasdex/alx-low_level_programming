#include <stdio.h>
#include <stdlib.h>

/**
 * Main - Print number of arguments
 * argc: Length of arguments
 * Return 0: Success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc-1);
	return (0);
}
