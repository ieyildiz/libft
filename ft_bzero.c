#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char*) s;

    size_t i;

    i = 0;

    while (n > i)
    {
        ptr[i] = 0;
        i++;
    }
    s = ptr;
}