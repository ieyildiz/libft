#include "libft.h"

int main()
{
    char buffer[10];
    ft_bzero1(buffer, sizeof(buffer));

    char dize[] = "vadi istanbul";
    ft_bzero1(dize, 5);
    printf("after edit: %s\n", dize);

    return (0);
}