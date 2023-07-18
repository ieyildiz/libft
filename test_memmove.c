#include "libft.h"

int main()
{
    char dest[] = "  hello";
    char src[] = "world!";
    char src2[] = "newest";

    printf("before dest: %s\n", dest);
    printf("before src: %s\n", src);

    ft_memmove(dest, src, 13);

    printf("after dest: %s\n", dest);
    printf("after src: %s\n", src);
    ft_memmove(dest + 7, src2, dest);

    printf("after2: %s\n", dest);

    return (0);
}