#include "main.h"
#include <ctype.h>
/**
 * times_table - function
 * Return: 0 if everything is okay
 */
void times_table(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int result = i * j;

_putchar('0' + i);
_putchar(' ');
_putchar('x');
_putchar(' ');
_putchar('0' + j);
_putchar(' ');
_putchar('=');
_putchar(' ');
if (result < 10)
{
_putchar(' ');
}
else
{
_putchar('0' + result / 10);
}
_putchar('0' + result % 10);
_putchar('\n');
}
}
}
