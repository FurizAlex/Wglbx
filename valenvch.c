/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valenvch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:17:18 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 13:20:35 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This is basically to check if its a valid environment character */

#include "wglbx.h"

static int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

int	valid_env_ch(char c)
{
	return (ft_isalnum(c) || c == '_' || c == '?');
}