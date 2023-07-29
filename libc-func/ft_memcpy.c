/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:35 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 20:59:00 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * *copies n bytes from memory area src to memory area dst.
	 * *If dest and src overlap, behaviour is undefined.
	 * */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*p;

	i = 0;
	str = dst;
	p = src;
	while (n > i)
	{
		str[i] = p[i];
		i++; 
	}
	return (dst);
}
