/**
 * string_toupper - function
 * @str: integer
 * Return: 0 if everything is okay
 */
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr = *ptr - ('a' - 'A');
}
ptr++;
}
return (str);
}

