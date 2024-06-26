#include "main3.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c1 = 'a';
    char c2 = 'A';
    char c3 = 'z';
    char c4 = 'Z';

    printf("%c: %d\n", c1, _islower(c1));  /* Should print: a: 1 */
    printf("%c: %d\n", c2, _islower(c2));  /* Should print: A: 0 */
    printf("%c: %d\n", c3, _islower(c3));  /* Should print: z: 1 */
    printf("%c: %d\n", c4, _islower(c4));  /* Should print: Z: 0 */

    return (0);
}

