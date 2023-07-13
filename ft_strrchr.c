#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    char newC = (char)c;

    int i;

    i = 0;

    while(s[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    
    while (s[i] != '\0')
    {
        if (s[i] == newC)
        {
            return (char *)(s + i);
        }
        i--;
    }

    return NULL;
}