#include "libft.h"

int main() {
    const char myString[] = "   Hello, World!   ";
    char* trimmed = ft_strtrim(myString);

    if (trimmed != NULL) {
        printf("Original string: \"%s\"\n", myString);
        printf("Trimmed string: \"%s\"\n", trimmed);

        // Don't forget to free the allocated memory when you're done with the trimmed string
        free(trimmed);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}