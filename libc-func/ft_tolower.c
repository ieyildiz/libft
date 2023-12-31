/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:13:20 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 11:14:17 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * Küçük harf'e dönüştür.
	 */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	else
	{
		return (0);
	}
}
