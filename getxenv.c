/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getxenv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:33:17 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 13:57:19 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wglbx.h"

char	*getxenv(char **envp, const char *key)
{
	int	i;
	int	len;

	i = 0;
	len = measure(key);
	while (envp[i])
	{
		if (!ncomp(envp[i], key, len) && envp[i][len] == '=')
			return (envp[i] + len + 1);
		i++;
	}
	return (NULL);
}
