#include "main.h"
/**
 * _strcat - function
 * @dest: integer
 * @src: integer
 * Return: 0 if everything nis okayy
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}

while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}

*ptr = '\0';

return (dest);
}
