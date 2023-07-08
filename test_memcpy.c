#include "libft.h"

int main() {
    char source[] = "Vadi Istanbul";
    char destination[20];

    printf("before dest: %s\n", destination);
    printf("before source: %s\n", source);
    ft_memcpy(destination, source, sizeof(source));
    printf("after dest: %s\n", destination);
    printf("after source: %s\n", source);

    return (0);
}