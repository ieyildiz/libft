#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t lenofs1 = ft_strlen(s1);
    size_t lenofs2 = ft_strlen(s2);
    size_t i;
    size_t j;
    str = (char *)malloc(sizeof(char) * (lenofs1 + lenofs2 + 1));

    i = 0;
    j = 0;

    if (!s1 || !s2 || !str)
    {
        return (NULL);
    }


    while (i < lenofs1)
    {
        str[i] = s1[i];
        i++;
    }
    while (j < lenofs2)
    {
        str[i] = s2[j];
        j++;
        i++;
    }
    return(str);
}