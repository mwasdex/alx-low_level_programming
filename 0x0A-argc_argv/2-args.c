#include <stdio.h>
#include <stdlib.h>

/**
 * Main - Prints all the arguments it receives
 * argc: Length of arguments
 * argv: Arguments
 * Return 0: Success
 */

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}
