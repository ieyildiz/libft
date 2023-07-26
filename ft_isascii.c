#include "libft.h"

int ft_isascii(int c)
{
    /*
    c değerinin ascii karakter olmasını kontrol eder.
    */
    if ((c >= 0) && (c <= 127))
    {
        return (1);
    }
    return (0);
}