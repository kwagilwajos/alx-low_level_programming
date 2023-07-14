#include <stdio.h>
/**
 * main - function
 * Return: 0 if everything is okay
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i == 9)
break;
putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}

