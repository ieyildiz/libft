#include "libft.h"

void test(int size)
{
    char string[] = "Hello";
    char buffer[19] = "there";
    int r;

    r = ft_strlcat(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(5);
    test(6);
    test(3);
    test(2);

    return(0);
}