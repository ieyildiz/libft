/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:11:23 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 12:57:30 by matrix           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * char *str;// malloc edilecek değişken
	 * strdup ile s stringini str adlı yeni bir stringe duplicate ettik. 
	 * veya (char *)malloc(sizeof(char *) * /ft_strlen(s) + 1) ile 
	 * aynısını yapabiliriz.
	 */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = (*f)(i, s[i]);
		++i;
	}
	ret[i] = '\0';
	return (ret);
}

/*#include "libft.h"
/* *** */
/*char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))*/
/*{*/
/*	int	i;*/
/*	char	*str;*/
/* *** */
/*	i = 0;*/
/*	if (!s || !f || !(str = ft_strdup(s)))*/
/*	{*/
/*		return (NULL);*/
/*	}*/
/*	while(str[i])*/
/*	{*/
/*		str[i] = f(i, str[i]);*/
/*		i++;*/
/*	}*/
/*	return (str);*/
/*}*/
