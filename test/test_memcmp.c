#include "libft.h"

int main()
{
    char str1[] = "aaaa";
    char str2[] = "aaaa";

    int result = ft_memcmp(str1, str2, 4);

    if (result < 0)
    {
        printf("str1 is less than str2\n");
    }
    else if (result > 0)
    {
        printf("str1 is greater than str2\n");
    }
    else
    {
        printf("str1 is equal to str2\n");
    }

    return (0);
}