/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:13:25 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 11:16:43 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * Büyük harf'e dönüştür.
	 */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
	{
		return (0);
	}
}
