#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str1 = (const char *)s1;
    const char *str2 = (const char *)s2;
    size_t i;

    i = 0;

    while (i < n)
    {
        if(str1[i] != str2[i])
        {
            if (str1[i] > str2[i])
            {
                return (1);
            }
            else
            {
                return (-1);
            }
        }
        i++;
    }

    return (0);
}