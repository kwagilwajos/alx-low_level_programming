#include "main.h"
/**
 * print_to_98 - function
 * @n: integer
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (int i = n; i <= 98; i++)
{
if (i != 98)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
}
else
{
for (int i = n; i >= 98; i--)
{
if (i != 98)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
}
}
_putchar('\n');
}
