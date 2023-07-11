#include "libft.h"

int main()
{
    char dest[] = "  defg";
    char src[] = "abcdefg";

    printf("before dest: %s\n", dest);
    printf("before src: %s\n", src);

    ft_memmove(dest, src, 13);

    printf("after dest: %s\n", dest);
    printf("after src: %s\n", src);

    return (0);
}