#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    unsigned int sayi;

    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        sayi = (unsigned int)(n * -1);
    }
    else
        sayi = (unsigned int)n;
    if (n >= 10)
    {
        ft_putnbr_fd(sayi/10, fd); // birler basamak harici yazar Ör. sayi:1234 1. 123 2.
    }
    ft_putchar_fd((char)(sayi % 10 + 48), fd);//birler basamak yazar
}