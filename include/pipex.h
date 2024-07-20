/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadj-ar <ahadj-ar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:29:45 by ahadj-ar          #+#    #+#             */
/*   Updated: 2024/07/20 19:03:03 by ahadj-ar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../Libft/includes/libft.h"
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/wait.h>
# include <unistd.h>

// STRUCTURE

typedef struct s_pipex
{
	char	**cmds_paths;
	char	***my_cmds;
}		t_pipex;

// PROTOTYPES

void	ft_error(int i);
void	ft_parsing(char *argv[], char **envp, t_pipex *pipex);
void	ft_exec_pipex(t_pipex *pipex, char *envp[]);

#endif