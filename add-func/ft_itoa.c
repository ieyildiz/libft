/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:10:15 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 15:25:37 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int num)
{
	int	i;

	if (num == 0)
		return (1);
	i = 0;
	while (num > 0 || num < 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dizi;
	long	sayi;

	sayi = n;
	len = ft_numlen(sayi);
	if (n < 0)
	{
		len++;
		sayi = -sayi;
	}
	dizi = malloc(sizeof(char) * len + 1);
	if (!dizi)
		return (NULL);
	dizi[len] = '\0';
	while (sayi > 0)
	{
		dizi[--len] = sayi % 10 + 48;
		sayi /= 10;
	}
	if (n < 0)
		dizi[0] = '-';
	if (n == 0)
		dizi[0] = '0';
	return (dizi);
}
