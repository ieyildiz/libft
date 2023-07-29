/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:25:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 15:31:38 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

/*
 It is used to convert a string 
 of characters representing an integer into an actual integer value.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	i;

	a = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	a = a * sign;
	return (a);
}
