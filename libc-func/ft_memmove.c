/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:46 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 16:50:45 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/* int main(){ */
/*	char *src = "123456789";*/
/*	char *dst = "123456789";*/
/*	ft_memmove(dst, src, 6);*/
/*	printf("%s", dst);*/
/*	return 0;*/
/*}*/
/* *** */
/*#include "libft.h"*/
/* *** */
/*void	*ft_memmove(void *dst, const void *src, size_t len)*/
/*{*/
/*	size_t	i;*/
/*	char	*newdst;*/
/*	char	*newsrc;*/
/* *** */
/*	newdst = (char *)dst;*/
/*	newsrc = (char *)src;*/
/*	i = 0;*/
/*	if (newdst == newsrc)*/
/*		return (newdst); */
/*	if ((size_t)newdst - (size_t)newsrc < len)*/
/*	{*/
/*		i = len -1;*/
/*		while (i < len)*/
/*		{*/
/*			newdst[i] = newsrc[i];*/
/*			i--;*/
/*		}*/
/*	}*/
/*	else*/
/*	{*/
/*		while (i < len)*/
/*		{*/
/*			newdst[i] = newsrc[i];*/
/*			i++;*/
/*		}*/
/*	}*/
/*	return (newdst);*/
/*}*/
