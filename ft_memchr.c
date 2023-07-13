#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str = (unsigned char *)s;

    size_t i;

    i = 0;
    while(*str != '\0' && i < n)
    {
        if (str[i] == c)
        {
            return (char *)(str + i);
        }
    }
    return NULL;
}