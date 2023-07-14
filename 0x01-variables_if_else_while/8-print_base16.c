#include <stdio.h>
/**
 * main - function
 * Return: 0 if everything is okay
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
putchar('0' + number);

for (number = 0; number < 6; number++)
putchar('a' + number);

putchar('\n');

return (0);
}
