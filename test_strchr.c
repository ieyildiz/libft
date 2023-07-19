#include "libft.h"

int main() {
    /*
    istenilen karakteri strigin hangi index ne döner
    */
    const char *str = "hello world!";
    char *ptr = ft_strchr(str, 'o');

    if (ptr != NULL) {
        printf("Found character 'o' at index: %ld\n", ptr - str);
        printf("%s\n", ptr);
    } else {
        printf("Character 'o' not found.\n");
    }

    return 0;
}