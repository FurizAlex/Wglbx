/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xprompt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:19:43 by alechin           #+#    #+#             */
/*   Updated: 2025/06/18 13:44:00 by alechin          ###   ########.fr       */
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
	write(1, GREEN, measure(GREEN));
	write(1, username, measure(GREEN));
	write(1, RESET, measure(RESET));
	write(1, ":", 1);
	write(1, BLUE, measure(BLUE));
	write(1, cwd, measure(cwd));
	write(1, RESET, measure(RESET));
	write(1, "$ ", 2);
}
