/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:02:55 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/11 16:19:47 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    if (dst == NULL || src == NULL || dstsize == 0)
    {
        return (0);
    }
    
    size_t  srcLen = 0;

    while (src[srcLen] != '\0')
    {
        srcLen++;
    }
    
    size_t i;
    for (i = 0; (i < dstsize - 1) && (src[i] != '\0'); i++)
        {
            dst[i] = src[i];
        }
    dst[i] = '\0';

    return (srcLen);
}