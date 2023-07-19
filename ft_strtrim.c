#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	for(int	i = 0; set[i] != '\0'; i++)
	{
		if (set[i] == c)
		{
			return(1);
		}
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len;
	char	*str;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	i = 0;
	if (s1 == NULL)
		return NULL;
	while (ft_isset(set, s1[i]))
	{
		i++;
	}
}
