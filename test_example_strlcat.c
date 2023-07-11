#include "libft.h"

void    test(int size)
{
    char dest[] = "Vadi İstanbul ";
    char buffer[] = "F station";
    int r;
    
    r = ft_strlcat(dest, buffer, size);

    printf("copied '%s' into '%s', length %d\n",
        buffer,
        dest,
        r);
}

int main()
{
    test(19);
    test(10);
    test(3);
    test(1);
    test(0);

    return (0);
}