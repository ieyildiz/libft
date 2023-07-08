#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char*) b;

    size_t i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return ptr; // or return b
}