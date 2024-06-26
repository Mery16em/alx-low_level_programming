#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting from 0.
 */
void times_table(void)
{
int i, j;

/* Outer loop for rows */
for (i = 0; i <= 9; i++)
{
/* Inner loop for columns */
for (j = 0; j <= 9; j++)
{
if (j == 0)
printf("%2d", i * j); /* Print the fileading space */
else
printf(", %2d", i * j); /* Print comma and space */
}
printf("\n"); /* Move to the next line after each row is printed */
}
}
;
/**
* Add a newline after each set of multiplications
*/
}
}

