#include "libft.h"

int main() 
{
    int number1 = 1234;
    int number2 = -6789;

    char *str1 = ft_itoa(number1);
    char *str2 = ft_itoa(number2);

    if (str1) {
        printf("Number1: %d, String1: %s\n", number1, str1);
        free(str1); // Don't forget to free the memory allocated by ft_itoa
    } else {
        printf("Memory allocation failed for number1.\n");
    }

    if (str2) {
        printf("Number2: %d, String2: %s\n", number2, str2);
        free(str2); // Don't forget to free the memory allocated by ft_itoa
    } else {
        printf("Memory allocation failed for number2.\n");
    }

    return 0;
}