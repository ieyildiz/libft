#include "libft.h"

void    ft_bzero(void *b, size_t length)
{
    /*
    b stringinde length kadar index'i 0 yapar.
    */
    ft_memset(b, 0, length);
    /*
    unsigned char *ptr = (unsigned char*) s;

    size_t i;

    i = 0;
    while (n > i)
    {
        ptr[i] = 0;
        i++;
    }
    s = ptr;
    */
}