#include "libft.h"

int ft_toupper(int c)
{
    /*
    Büyük harf'e dönüştür.
    */
    if (c >= 97 && c <= 122)
    {
        return (c - 32);
    }
    
    else
    {
        return (0);
    }
}