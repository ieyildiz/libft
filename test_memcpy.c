#include "libft.h"

int main()
{
    char dest[] = "hello";
    char src[] = "world";

    printf("before dest: %s\n", dest);
    printf("before src: %s\n", src);
    
    ft_memcpy(dest, src, 7);

    printf("after dest: %s\n", dest);
    printf("after src: %s\n", src);

    return (0);
}