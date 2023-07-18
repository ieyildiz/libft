#include "libft.h"

char    *ft_strdup(const char *str) 
{
    char *duplicateString;
    size_t len;

    len = ft_strlen(str) + 1;

    duplicateString = (char *)malloc(sizeof(*duplicateString) * len);

    if (!duplicateString)
    {
        return NULL;
    }
    else
    {
        return ((char *)ft_memcpy(duplicateString, str, len));
    }
}