/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:46 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/11 11:52:49 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *newdst = (unsigned char*) dst;
    unsigned char *newsrc = (unsigned char *) src;

    if (newdst == newsrc)
    {
        return dst;
    }

    size_t  i;
    
    i = 0;
    while (len > i)
    {
        newdst[i] = newsrc[i];
        i++;
    }
    return (newdst);
}