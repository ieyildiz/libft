#include "libft.h"

int main()
{
    int *int_array = (int *)ft_calloc(5, sizeof(int));

    if (int_array) 
    {
        for (int i = 0; i < 5; i++)
        {
            printf("%d", int_array[i]);
        }
        free(int_array);
    }
    printf("\n");
}