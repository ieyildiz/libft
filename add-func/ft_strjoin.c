/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:11:19 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 12:24:13 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*{
	 * char *str;
	 * size_t lenofs1 = ft_strlen(s1);
	 * size_t lenofs2 = ft_strlen(s2);
	 * size_t i;
	 * size_t j;
	 * str = (char *)malloc(sizeof(char) * (lenofs1 + lenofs2 + 1));
	 *
	 * i = 0;
	 * j = 0;
	 * 
	 * if (!s1 || !s2 || !str)
	 * {
	 * return (NULL);
	 * }
	 * 
	 * while (i < lenofs1)
	 * {
	 * str[i] = s1[i];
	 * i++;
	 * }
	 * while (j < lenofs2)
	 * {
	 * str[i] = s2[j];
	 * j++;
	 * i++;
	 * }
	 * return(str);
	 * }
	 */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lenofs1;
	size_t	lenofs2;

	lenofs1 = ft_strlen(s1);
	lenofs2 = ft_strlen(s2);
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	str = (char *)malloc(sizeof(char) * (lenofs1 + lenofs2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, lenofs1 + 1);
	ft_strlcat(str, s2, lenofs1 + lenofs2 + 1);
	return (str);
}
