#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    if (*haystack != '\0' || *needle != '\0')
    {
        for(size_t i = 0; i < len; i++)
        {
            if (haystack[i] == needle[i])
            {
                return ((char *)(haystack + i));
            }
        }
    }
    return NULL;
}