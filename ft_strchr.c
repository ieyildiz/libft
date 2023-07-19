#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    /*
    locates the first occurrence of c in the string pointed by s.
    */
    char newC = (char)c;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == newC)
        {
            return (char *)(s + i);
        }
    }
    
    return NULL;
}