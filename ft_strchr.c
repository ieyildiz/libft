#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char newC = (char)c;

    while (*s != '\0')
    {
        if (*s == newC)
        {
            return (char *)s;
        }
        s++;
    }
    
    return NULL;
}