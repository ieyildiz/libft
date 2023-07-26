#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    /*
    with fd descriptor c should be written. 
    */
    write(fd, &c, 1);
}