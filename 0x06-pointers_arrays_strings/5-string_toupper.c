#include "main.h"
#include <ctype.h>
char *string_toupper(char *string)
{
while (*string)
{
*string = toupper(*string);
string++;
}
return (0);
}
