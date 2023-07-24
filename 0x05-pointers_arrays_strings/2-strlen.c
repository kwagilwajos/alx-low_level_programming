/**
 * _strlen - function
 * @s: integer
 * Return: 0 if everything is okay
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
