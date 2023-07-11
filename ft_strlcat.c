#include "libft.h"

size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    if (dst == NULL || src == NULL || dstsize == 0)
    {
        return (0);
    }

    size_t srcLen = 0;

    while (src[srcLen] != '\0')
    {
        srcLen++;
    }

    size_t count = 0;

    while (dst[count] != '\0')
    {
        count++;
    }

    size_t i = 0;
    while ( i < dstsize - 1)
    {
        dst[count] = src[i];
        i++;
        count++;
    }

    return (srcLen);
}