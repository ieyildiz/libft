/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:13:11 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 11:00:50 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while ((*haystack != '\0') && (len >= needle_len))
	{
		if (ft_updated_ft_strncmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)(haystack));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
