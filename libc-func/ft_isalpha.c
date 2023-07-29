/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:08:39 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 19:01:30 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	x değerinin harf değeri olup olmadığını kontorl eder.
	*/
#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}
