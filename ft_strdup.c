#include "libft.h"

char *ft_strdup(const char *str) 
{
    int     index;
    int     length;
    char    *duplicateString;

    index = 0;
    size_t length = ft_strlen(str);

    if (str == NULL)
    {
        return NULL;
    }
    
    // Allocate memory for the duplicated string (+1 for null terminator)
    duplicateString = (char *)malloc((length + 1) * sizeof(*str));

    if (duplicateString != NULL)
    {
        while (i < j)
        {
            duplicateString[i] = str[i];
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}