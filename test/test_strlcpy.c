#include "libft.h"

int main()
{
    char src[] = "hello, world!";
    char dst[20];

    size_t len = ft_strlcpy(dst, src, 5);

    printf("kopyalanan string:%s\n"
    , dst);
    printf("kopyalan stringin uzunluğu %zu\n"
    , len);
    return (0);
}