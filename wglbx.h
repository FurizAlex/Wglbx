/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wglbx.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alechin <alechin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:00:32 by alechin           #+#    #+#             */
/*   Updated: 2025/06/17 10:40:40 by alechin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WGLBX_H
# define WGLBX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stddef.h>

char	*getxenv(char **envp, const char *key);
void	xprompt(char **envp);

#endif