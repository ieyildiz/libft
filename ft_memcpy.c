#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *str = (unsigned char*) dst;
    
    size_t i;

    i = 0;

    while (n > i)
    {
        unsigned char *p = (unsigned char*) src;

        str[i] = p[i];
        i++; 
    }
    dst = str;
    return (dst);
}