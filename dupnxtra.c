/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dupnxtra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 16:36:18 by alechin           #+#    #+#             */
/*   Updated: 2025/06/20 17:09:30 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wglbx.h"

static size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

char	*dupnxtra(char *str, size_t n)
{
	char	*dup;

	dup = malloc(n + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, n + 1);
	return (dup);
}
