#include "libft.h"
/*
int main(void)
{
    const char *s1 = "Bilgisayar";
    const char *s2 = "sayar";
    char *result = ex_strnstr(s1, s2, strlen(s1));

    printf("%s in this array, find: %s, addres: %p, index: %ld\n", s1, s2, result, result - s1);

    return (0);
}
*/
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 4);

    printf("%ld", ptr - largestring);
}