#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the string to print.
 */
void puts_half(char *str)
{
    int i, j;

    i = 0;
    while (str[i] != '\0')
        i++;

    if (i % 2 == 0)
        j = i / 2;
    else
        j = (i + 1) / 2;

    while (j < i)
    {
        _putchar(str[j]);
        j++;
    }
    _putchar('\n');
}

