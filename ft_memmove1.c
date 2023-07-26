#include "libft.h"

void *ft_memmove1(void *dst, const void *src, size_t len) {
    unsigned char *newdst = (unsigned char*) dst;
    const unsigned char *newsrc = (const unsigned char *) src;

    if (newdst == newsrc) {
        return dst;
    }

    // Check if there is an overlap
    if (newdst < newsrc) {
        for (size_t i = 0; i < len; i++) {
            newdst[i] = newsrc[i];
        }
    } else {
        // Copy in the opposite direction to avoid overwriting data
        for (size_t i = len; i > 0; i--) {
            newdst[i - 1] = newsrc[i - 1];
        }
    }

    return dst;
}