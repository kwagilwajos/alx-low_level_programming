/**
 * _strcpy - function
 * @dest: integer
 * @src: integer
 * Return: 0 if everything is okay
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (original_dest);
}
