#include "libft.h"

int main()
{
    const char str1[] = "aab";
    const char str2[] = "aa";

    int result = ft_updated_ft_strncmp(str1, str2, 3);

    if ( result < 0)
    {
        printf("str1 is less than str2\n");
    }
    
    else if (result > 0)
    {
        printf("str 1 is greater than str2\n");
    }

    else
    {
        printf("str1 and str2 are equal.\n");
    }

    return (0);
}