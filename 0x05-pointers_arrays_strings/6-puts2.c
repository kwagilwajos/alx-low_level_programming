#include "main.h"
/**
 * puts2 - function
 * @str: integer
 */
void puts2(char *str)
{
if (str == NULL)
return;

int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
