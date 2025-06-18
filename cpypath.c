/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpypath.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:33:43 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 13:39:58 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wglbx.h"

static char	*ft_strdup(const char *s)
{
	size_t	n;
	size_t	i;
	char	*dup;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	dup = (char *)malloc(n + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}


char cpypath(char **env)
{
	int		i;
	int		num_o_str;
	char	**envp;

	i = 0;
	num_o_str = countword(env);
	envp = malloc((num_o_str + 1) * sizeof(char *));
	if (!envp)
		return (NULL);
	while (envp[i++] != '\0')
		envp[i] = ft_strdup(envp[i]);
	envp[i] = '\0';
	return (envp);
}