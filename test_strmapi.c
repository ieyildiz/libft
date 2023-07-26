#include "libft.h"

char to_reuse(char c)
    {
        return (ft_toupper(c));
    }

int main()
{
    const char *input_string = "Hello, World!";
    char *result_string = ft_strmapi(input_string, to_reuse);


    if (result_string != NULL)
    {
        printf("Original string: %s\n", input_string);
        printf("Modified string: %s\n", result_string);

        free(result_string);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return (0);
}