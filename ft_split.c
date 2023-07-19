#include "libft.h"


char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;

    size_t word_count = 0;
    const char *p = s;

    // Count the number of words (substrings) in the input string
    while (*p)
    {
        if (*p != c)
        {
            word_count++;
            p = strchr(p, c);
            if (!p)
                break;
        }
        else
        {
            p++;
        }
    }

    // Allocate memory for the array of strings
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return NULL;

    size_t idx = 0;
    p = s;

    // Split the string and store substrings in the array
    while (*p)
    {
        const char *start = p;
        while (*p && *p != c)
            p++;

        size_t word_length = p - start;
        result[idx] = (char *)malloc(sizeof(char) * (word_length + 1));

        if (!result[idx])
        {
            // Free memory for previous substrings if allocation fails
            for (size_t i = 0; i < idx; i++)
                free(result[i]);
            free(result);
            return NULL;
        }

        strncpy(result[idx], start, word_length);
        result[idx][word_length] = '\0';
        idx++;

        if (*p)
            p++; // Skip the delimiter character
    }

    result[idx] = NULL; // Set the last element of the array to NULL
    return result;
}