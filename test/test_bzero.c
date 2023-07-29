#include "libft.h"

int main()
{
    char dize[] = "vadi istanbul";
    ft_bzero(dize, 5);
    dize[5] = '\0';
    printf("after edit: %s\n", dize);

    return (0);
}