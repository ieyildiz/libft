#include <stddef.h> // Include for size_t
#include <stdio.h>

void *my_memcpy(void *dest, const void *src, size_t size)
{
    unsigned char *dest_ptr = (unsigned char*) dest;
    const unsigned char *src_ptr = (const unsigned char*) src;

    // Check for overlapping memory blocks
    if (dest_ptr > src_ptr && dest_ptr < src_ptr + size)
    {
        // Copy in reverse order to avoid overwriting source data
        for (size_t i = size; i > 0; i--)
        {
            dest_ptr[i - 1] = src_ptr[i - 1];
        }
    }
    else
    {
        // Copy in regular order
        for (size_t i = 0; i < size; i++)
        {
            dest_ptr[i] = src_ptr[i];
        }
    }

    return dest;
}

int main() {
    char source[20] = "Vadi Istanbul";
    char destination[20] = "F station 42-paris";

    printf("before dest: %s\n", destination);
    printf("before source: %s\n", source);
    my_memcpy(destination, source, sizeof(source));
    printf("after dest: %s\n", destination);
    printf("after source: %s\n", source);

    return (0);
}