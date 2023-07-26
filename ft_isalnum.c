/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:11:15 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/06 15:11:15 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isalnum(int c)
{
    /*
    c değerini rakam veya harf olmasını kontrol eder.
    */
    /*
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
    {
        return (1);
    }
    return (0);
    */
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);
}