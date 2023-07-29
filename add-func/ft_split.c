/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:10:58 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/29 16:26:03 by iyildiz          ###   ########.fr       */
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
	char	*array;
	long	nbr;

	nbr = n;
	len = ft_numlen(nbr);
	if (n < 0)
	{
		len++;
		nbr = -nbr;
	}
	array = malloc(sizeof(char) * len + 1);
	if (!array)
		return (NULL);
	array[len] = '\0';
	while (nbr > 0)
	{
		array[--len] = nbr % 10 + 48;
		nbr /= 10;
	}
	if (n < 0)
		array[0] = '-';
	if (n == 0)
		array[0] = '0';
	return (array);
}

/* ************************************************************************** */
/*#include "libft.h"*/
/* **** */
/*char	**ft_split(char const *s, char c)*/
/*{ *** */
/*	size_t word_count = 0;*/
/*	const char *p = s;*/
/* *** */
/*	if (!s)*/
/*		return NULL;*/
/*	while (*p)*/
/*	{*/
/*		if (*p != c)*/
/*		{*/
/*			word_count++;*/
/*			p = strchr(p, c);*/
/*			if (!p)*/
/*				break;*/
/*		}*/
/*		else*/
/*			p++;*/
/*	}*/
/*	char **result = (char **)malloc(sizeof(char *) * (word_count + 1));*/
/*	if (!result)*/
/*		return (NULL);*/
/*      	size_t idx = 0;*/
/*	p = s;*/
/*	while (*p)*/
/*	{*/
/*		const char *start = p;*/
/*		while (*p && *p != c)*/
/*			p++;*/
/*		size_t word_length = p - start;*/
/*		result[idx] = (char *)malloc(sizeof(char) * (word_length + 1));*/
/*		if (!result[idx])*/
/*		{*/
/*			for (size_t i = 0; i < idx; i++)*/
/*				free(result[i]);*/
/*			free(result);*/
/*			return NULL;*/
/*		}*/
/*		strncpy(result[idx], start, word_length);*/
/*		result[idx][word_length] = '\0';*/
/*		idx++;*/
/*		if (*p)*/
/*			p++;*/
/*	}*/
/*	result[idx] = NULL;*/
/*	return result;*/
/*}*/
