#include "main.h"
#include <ctype.h>
/**
 * print_sign - function
 * @n: integer
 * Return: 0 if everything is okay
 */
int print_sign(int n)
{
    if (n > 0) {
        _putchar('+');
        return 1;
    } else if (n == 0) {
        _putchar('0');
        return 0;
    } else {
        _putchar('-');
        return -1;
    }
}
