/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 22:41:02 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * stringleri güvenli bir şekilde birleştirmek için
	 */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	src_len;
	size_t	count;
	size_t	i;

	src_len = 0;
	if (dst == NULL || src == NULL || dstsize == 0)
		return (0);
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	count = 0;
	while (dst[count] != '\0')
	{
		count++;
	}
	i = 0;
	while (i < dstsize - 1)
	{
		dst[count] = src[i];
		i++;
		count++;
	}
	return (src_len);
}
