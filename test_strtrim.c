#include <stdio.h>
#include <string.h>
#include "libft.h"

// Test işlevi
void test_ft_strtrim(const char *s1, const char *set)
{
    char *result = ft_strtrim(s1, set);
    printf("Input String: \"%s\"\n", s1);
    printf("Trim Set: \"%s\"\n", set);
    printf("Trimmed Result: \"%s\"\n", result ? result : "NULL");
    free(result);
}

int main()
{
    // Test senaryoları
    test_ft_strtrim("Hello, world!", "w"); // "Hello, world!"
    test_ft_strtrim("Hello, world!   ", " "); // "Hello, world!"
    test_ft_strtrim("   Hello, world!", " "); // "Hello, world!"
    test_ft_strtrim("Hello, world!", " "); // "Hello, world!"
    test_ft_strtrim("  Hello,  world!  ", " ,!"); // "Hello"
    test_ft_strtrim("  ", " "); // ""

    return 0;
}