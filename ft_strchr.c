#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
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