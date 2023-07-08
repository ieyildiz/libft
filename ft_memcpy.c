#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *str = (unsigned char*) dst;
    unsigned char *p = (unsigned char*) src;

    size_t i;

    i = 0;

    while (n > i)
    {
        str[i] = p[i];
        i++; 
    }
    return (dst);
}