#include "libft.h"

int main()
{
    const char* s1 = "Hello,";
    const char* s2 = "World!";

    char* toplam;

    toplam = ft_strjoin(s1, s2);

    if (toplam != NULL)
    {
        printf("Substring: %s\n", toplam);
        free(toplam);
    }

    return (0);
}