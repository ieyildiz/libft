#include "libft.h"

int main()
{
    char dize[] = "vadi Istanbul";

    printf("dize içerik: %s\n", dize);
    ft_memset(dize, 'x', 5);
    printf("dize içerik: %s\n", dize);

    return (0);
}