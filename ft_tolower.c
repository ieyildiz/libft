#include "libft.h"

int ft_tolower(int c)
{
    /*
    Küçük harf'e dönüştür.
    */
    if (c >= 65 && c <= 90)
    {
        return (c + 32);
    }

    else
    {
        return (0);
    }
}