#include "main.h"

/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; (s[n] != c) && (s[n] != '\0'); n++)
		;
	if (s[n] == c)
		return (s + n);
	else
		return (NULL);
}
