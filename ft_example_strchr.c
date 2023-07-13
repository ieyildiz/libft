#include <stddef.h>

char *strchr(const char *str, int c) {
    char ch = (char)c; // Convert int to char

    // Iterate through the string until we find the character or reach the end
    while (*str != '\0') {
        if (*str == ch) {
            return (char *)str; // Found the character, return its location as a pointer
        }
        str++; // Move to the next character
    }

    return NULL; // Character not found, return NULL
}