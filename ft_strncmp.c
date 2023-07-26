#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    /*
    
    */
    size_t  i;
    i = 0;

    while (i < n)
    {
        if (s1[i] != '\0' && s2[i] != '\0')
        {
            if (s1[i] == s2[i])
            {
                return (0);
            }
            else if (s1[i] > s2[i])
            {
                return (1);
            }
            else
            {
                return (-1);
            }
        }

        if (s1[i] == s2[i])
        {
            continue;
        }
        i++;
    }

    return (0);
}    
