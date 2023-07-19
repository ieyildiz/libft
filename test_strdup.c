#include "libft.h"

int main()
{
    const char *originalString = "Hello, world!";
    char *duplicateString;

    duplicateString = ft_strdup(originalString);

    if (duplicateString != NULL)
    {
        printf("Original sting: %s\n", originalString);
        printf("Duplicated string: %s\n", duplicateString);
        printf("Original sting: %s\n", originalString);
        free(duplicateString);
    }

    else 
    {
        printf("memory allocaition failed");
    }

    return (0);
}