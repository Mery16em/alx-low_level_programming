#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%.2d:%.2d\n", hour, minute);
}
}
}

