#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char source[20] = "Vadi Istanbul";
    char destination[20] = "F station 42-paris";

    printf("before dest: %s\n", destination);
    printf("before source: %s\n", source);
    memcpy(destination, source, sizeof(source));
    printf("after dest: %s\n", destination);
    printf("after source: %s\n", source);

    return (0);
}