/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:11:50 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/07 20:11:50 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlen();

int main()
{
    const char *str = "Hello, World!";

    size_t length =ft_strlen(str);

    printf("Length: %zu\n", length);
}