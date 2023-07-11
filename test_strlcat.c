#include "libft.h"

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19] = "smthing";
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
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}