/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:16:30 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/17 22:16:30 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *rtn;

    rtn = malloc(size * nmemb);

    if (rtn == NULL)
    {
        return (NULL);
    }
    ft_bzero(rtn, nmemb);
    return (rtn);
}