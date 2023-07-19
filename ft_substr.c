#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    /*
    To extract a substring from a given string, 
    */
    size_t  i;
    size_t  j;
    char    *str;

    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(*s) * (len + 1));

    if (str == 0)
    {
        return (NULL);
    }

    while(s[i] != '\0')
    {
        if (i >= start && j < len)
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    //str[j] = '\0'; Null-terminate the substring

    return (str);
}