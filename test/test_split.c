#include "libft.h"

// Function to print the array of strings
void print_str_array(char **str_array) {
    if (!str_array)
        return;

    for (int i = 0; str_array[i] != NULL; i++) {
        printf("%s\n", str_array[i]);
    }
}

int main() {
    char const *input_str = "This,is,a,test,string";
    char delimiter = ',';

    char **result = ft_split(input_str, delimiter);

    if (result) {
        print_str_array(result);

        // Free the memory allocated for the array of strings and its elements
        for (int i = 0; result[i] != NULL; i++) {
            free(result[i]);
        }
        free(result);
    } else {
        printf("Error: Memory allocation failed.\n");
    }

    return 0;
}