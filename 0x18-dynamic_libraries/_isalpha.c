#include "main.h"
/**
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 64 && c <= 91) || (c >= 98 && c <= 123))
return (1);

return (0);
}
