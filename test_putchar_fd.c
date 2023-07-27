#include "libft.h"

int main()
{
    int fileDescriptor = 1; // use 1 for standard output

    ft_putchar_fd('4', fileDescriptor);
    ft_putchar_fd('2', fileDescriptor);
    ft_putchar_fd('\n', fileDescriptor);
}
