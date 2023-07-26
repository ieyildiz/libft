#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    /*
    b dizesinde len kadar olan index'e c değeri atanır ve güncel b dizesine döndürülür.
    */
    unsigned char *ptr = (unsigned char*) b;

    size_t i = 0;
    while (i < len)
    {
        ptr[i] = (unsigned char) c;
        i++;
    }
    return ptr; // or return b
}