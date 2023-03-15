#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that add positive numbers
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  */

int main(int argc, char *argv[])
{
    int i, j, add = 0;

    if (argc < 3)
        printf("0\n");

    else
    {
        for (i = 1; i < argc; i++)
        {
            for (j = 0; (argv[i])[j] != '\0'; j++)
            {
                if (((argv[i])[j] - '0') >= 0 && ((argv[i])[j] - '0') <= 9)
                    continue;
                else
                {
                    printf("Error\n");
                    return (1);
                }
            }
            add += atoi(argv[i]);
        }
        printf("%d\n", add);
    }
    return (0);
}