#include "libft.h"

char *ex_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = ft_strlen(needle);

    if (*needle == '\0')
        return (char *)haystack;

    while (*haystack != '\0' && len >= needle_len)
    {
        if (ft_updated_ft_strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;
        
        haystack++;
        len--;
    }

    return NULL;
}