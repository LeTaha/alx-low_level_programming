#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, \", (, ), {, and }.
 * @p: pointer to string.
 *
 *Return: pointer to str.
 */
char *cap_string(char *str)
{
int cap_next = 1;
char *p = str;
while (*p != '\0')
{
if (*p == ' ' || *p == '\t' || *p == '\n' || *p == ',' || *p == ';' || *p == '.' || *p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
{
cap_next = 1;
}
else if (cap_next)
{
if (*p >= 'a' && *p <= 'z')
{
*p -= 32;
}
cap_next = 0;
}
p++;
}
return (str);
}
