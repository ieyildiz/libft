/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 15:12:52 by iyildiz           #+#    #+#             */
/*   Updated: 2023/07/28 22:30:02 by iyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	 * function that is used to duplicate a string.
	 * It allocates memory for a new string, 
	 * copies the contents of the original string into the newly allocated memory, 
	 * and returns a pointer to the duplicated string.
	 *
	 * + 1 for null terminator
	 *
	 * allocate memory for the duplicated string
	 * 
	 * copies n bytes from memory area src to memory area dst.
	 */
#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*duplicate_string;
	size_t	len;

	len = ft_strlen(str) + 1;
	duplicate_string = (char *)malloc(sizeof(*duplicate_string) * len);
	if (!duplicate_string)
	{
		return (NULL);
	}
	else
	{
		return ((char *)ft_memcpy(duplicate_string, str, len));
	}
}
