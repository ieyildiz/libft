#include "libft.h"

char    *ft_strdup(const char *str) 
{
    /*
    function that is used to duplicate a string.
    It allocates memory for a new string, 
    copies the contents of the original string into the newly allocated memory, 
    and returns a pointer to the duplicated string.
    */
    char *duplicateString;
    size_t len;

    len = ft_strlen(str) + 1;//+1 for null terminator

    duplicateString = (char *)malloc(sizeof(*duplicateString) * len);//allocate memory for the duplicated string

    if (!duplicateString)
    {
        return NULL;
    }
    else
    {
        return ((char *)ft_memcpy(duplicateString, str, len));//copies n bytes from memory area src to memory area dst.
    }
}