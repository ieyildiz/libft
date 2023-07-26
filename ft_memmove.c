/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:24:46 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/25 14:11:26 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    /*
    The memmove() function copies len bytes from string src to string dst. The
	two strings may overlap; the copy is always done in a non-destructive
    manner.
    */
    unsigned char *newdst = (unsigned char*) dst;
    unsigned char *newsrc = (unsigned char *) src;
    size_t i;

    i = 0;
    if (newdst == newsrc)
        return (newdst);
    
    if (!newdst && !newsrc)
        return (0);
    
    if ((size_t)newdst - (size_t)newsrc < len)
    {
        i = len -1;
        while (i<len)
        {
            newdst[i] = newsrc[i];
            i--;
        }
    }
    else
    {
        while (i<len)
        {
            newdst[i] = newsrc[i];
            i++;
        }
    }
    return (newdst);
    
}