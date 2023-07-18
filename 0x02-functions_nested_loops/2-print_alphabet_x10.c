#include "main.h"
/**
 * print_alphabet - function
 * Return: 0 if everything is okay
 */
void print_alphabet_x10(void)
{
int x = 0;

while (x<10)
{
for (char letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
x++;
}

}
