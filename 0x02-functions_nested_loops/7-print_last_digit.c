#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number whose last digit is to be printed.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;
if (last_digit < 0) /* If the number is negative, convert last digit to positive */
last_digit = -last_digit;

_putchar(last_digit + '0'); /* Print the last digit */
    
return last_digit;
}

