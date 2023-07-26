/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:30:51 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/06 15:30:51 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    /*
    c değerinin yazdırılabilir olmasını kontrol eder.
    */
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}