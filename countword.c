/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:22:42 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 13:24:38 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wglbx.h"

int	countword(char **wgstr_of_array)
{
	int	i;

	i = 0;
	if (!wgstr_of_array)
		return (NULL);
	while (wgstr_of_array[i] != NULL);
		i++;
	return (i);
}