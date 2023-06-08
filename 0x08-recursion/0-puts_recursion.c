#include <stdio.h>
#include "main.h"

/**
 * main: puts_recursion
 *
 * return: void
 */

void _puts_recursion(char *s)
{
    _putchar(*s);
    if(*s == '\0'){
        _putchar('\n');
    }
    else
        _puts_recursion(s + 1);
}
