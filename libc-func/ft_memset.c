/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:48 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 21:53:46 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * b dizesinde len kadar olan index'e 
	 * c değeri atanır ve güncel b dizesine döndürülür.
	 */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)b;
	while (i < len)
	{
		ptr[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
/*
 * or return b
 */
