#include "libft.h"

int main()
{
    const char* str = "Hello, World!";

    char* result;

    result = ft_substr(str, 7, 5);

    if (result != NULL)
    {
        printf("Substring: %s\n", result);
        free(result);
    }

    return (0);
}