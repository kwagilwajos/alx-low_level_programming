#include <stdio.h>
/**
 * main - function
 * Return: 0 if everything is okay
 */
int main(void)
{
int letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');

return (0);
}
