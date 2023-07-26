#include "libft.h"

void print_ascii(unsigned int index, char *c)
    {
        printf("character at index %u: %c (ASCII: %d)\n", index, *c, *c);
    }

int main()
{
    char input_string[] = "Hello, World!";

    ft_striteri(input_string, print_ascii);

    return (0);
}