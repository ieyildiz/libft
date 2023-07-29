/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:10:48 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 12:32:47 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * ft_putnbr_fd(sayi/10, fd); // birler basamak harici yazar 
	 * Ör. sayi:1234 1. 123 2.
	 * ft_putchar_fd((char)(sayi % 10 + 48), fd);//birler basamak yazar
	 */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	sayi;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sayi = (unsigned int)(n * -1);
	}
	else
		sayi = (unsigned int)n;
	if (n >= 10)
	{
		ft_putnbr_fd(sayi / 10, fd);
	}
	ft_putchar_fd((char)(sayi % 10 + 48), fd);
}
