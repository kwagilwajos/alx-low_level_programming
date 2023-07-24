#include "main.h"
/**
 * print_rev - function
 * @s: integer
 */
void print_rev(char *s)
{
if (s == NULL)
return;

int length = 0;
char *end = s;

while (*end != '\0')
{
length++;
end++;
}

for (int i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
