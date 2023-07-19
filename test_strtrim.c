#include "libft.h"

int main()
{
    const char myString[] = "   Hello, World!   ";
    char* trimmed = ft_strtrim(myString);

    if (trimmed != NULL)
    {
        printf("Original String: %s\n", myString);
        printf("Trimmed string: %s\n", trimmed);

        free(trimmed);
    }
    else
    {
        printf("Memory allocation failed. \n");
    }
    return (0);
}