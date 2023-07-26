/**
 * _strcmp - function
 * @s1: integer
 * @s2: integer
 * Return: 0 if everything is okay
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

return (*s1 - *s2);
}
