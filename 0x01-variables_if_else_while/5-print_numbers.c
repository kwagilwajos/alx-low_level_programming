#include <stdio.h>
/**
 * main - function
 * Return: 0 if everything is okay
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
putchar(number + '0');

putchar('\n');

return (0);
}
