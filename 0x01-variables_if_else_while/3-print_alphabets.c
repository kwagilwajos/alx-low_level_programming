#include <stdio.h>
/**
 * main - function
 * Return: 0 if everything is okay
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');

return (0);
}
