/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xprompt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:19:43 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 12:43:28 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wglbx.h"

#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

void	xprompt(char **envp)
{
	char	cwd[PATH_MAX];
	char	*username;

	username = getxenv(envp, "USER");
	if (!username)
		username = "user";
	if (getcwd(cwd, sizeof(cwd)) == NULL)
	{
		write(1, "[minishell]$", 13);
		return ;
	}
	write(1, GREEN, ft_strlen(GREEN));
	write(1, username, ft_strlen(GREEN));
	write(1, RESET, ft_strlen(RESET));
	write(1, ":", 1);
	write(1, BLUE, ft_strlen(BLUE));
	write(1, cwd, ft_strlen(cwd));
	write(1, RESET, ft_strlen(RESET));
	write(1, "$ ", 2);
}
