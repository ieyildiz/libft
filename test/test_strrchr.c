#include "libft.h"

int main()
{
    const char *s = "hello world!";
    char *ch = ft_strrchr(s, 'o');

    if (ch != NULL) 
    {
        printf("%s, o karakterin sondan indexi: %ld\n", ch, ch - s);
    }
    
    else
    {
        printf("o karakteri bulunamadı.\n");
    }

    return (0);
}