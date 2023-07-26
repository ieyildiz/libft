#include "libft.h"

int main()
{
    int fileDescriptor = 1; // use 1 for standard output

    ft_putchar_fd('a\n', fileDescriptor);
    ft_putchar_fd('o', fileDescriptor);
}
