#include "libft.h"

void *(ft_memmove(void *dst, const void *src, size_t len))
{
    unsigned char *newdst = (unsigned char*) dst;
    unsigned char *newsrc = (unsigned char*) src;

    if (newdst == newsrc)
    {
        return (dst);
    }

    if (newdst < newsrc)
    {   
        for(size_t i = 0; len > i; i++)
        {
            newdst[i] = newsrc[i];
        }
    }

    else
    {
        for(size_t i = len; i > 0; i--)
        {
            newdst[i - 1] = newsrc[i - 1];
        }
    }

    return (dst);
}