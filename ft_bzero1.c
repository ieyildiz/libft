#include "libft.h"

void    ft_bzero1(void *b, size_t length)
{
    ft_memset((void *) b, 0, (size_t) length);
}