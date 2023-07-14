#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str = s;
    unsigned char cNew = (unsigned char) c;

    for (size_t i = 0; i < n; i++)
    {
        if (str[i] == cNew)
        {
            return (void *)(str + i);
        }
    }
    return NULL;
}