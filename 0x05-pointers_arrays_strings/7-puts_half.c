#include "main.h"
/**
 * puts_half - function
 * @str: integer
 * Return: 0 if everything is okay
 */
void puts_half(char *str)
{
int length = 0;
char *end = str;
int i;
int half_length = (length - 1) / 2;
while (*end != '\0')
{
length++;
end++;
}


for (i = half_length + 1; i < length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
