#include "libft.h"

int main()
{
    char str[] = "hello, world!";
    char *result = ft_memchr(str, 'w', strlen(str));

    if (result != NULL)
    {
        printf("Founded 'w' at position %ld\n", result-str);
    }
    else
    {
        printf("did not find 'w'\n");
    }

    return 0;
}