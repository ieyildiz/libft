#include "libft.h"

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    char *str;// malloc edilecek değişken
    unsigned int    i;

    i = 0;
    if (!s || !f || !(str = ft_strdup(s))) 
        {
            /*
            strdup ile s stringini str adlı yeni bir stringe duplicate ettik. 
            veya (char *)malloc(sizeof(char *) * /ft_strlen(s) + 1) ile aynısını yapabiliriz.
            */
            return (NULL);
        }
    while(str[i])
    {
        str[i] = f(i, str[i]);
        i++;
    }
    return (str);
}