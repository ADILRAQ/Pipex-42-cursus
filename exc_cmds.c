/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exc_cmds.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 12:15:31 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/17 17:33:31 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	exec_cmd_1(t_info **all)
{
	if ((*all)->bin_path1 && (*all)->in_fd != -1)
	{
		close((*all)->out_fd);
		close((*all)->fd[0]);
		dup2((*all)->in_fd, STDIN_FILENO);
		dup2((*all)->fd[1], STDOUT_FILENO);
		close((*all)->in_fd);
		close((*all)->fd[1]);
		execve((*all)->bin_path1, (*all)->cmd1, NULL);
	}
	exit(EXIT_SUCCESS);
}

/*----------------------------------------------------------------*/

static void	exec_cmd_2(t_info **all)
{
	if ((*all)->bin_path2)
	{
		close((*all)->in_fd);
		close((*all)->fd[1]);
		dup2((*all)->fd[0], STDIN_FILENO);
		dup2((*all)->out_fd, STDOUT_FILENO);
		close((*all)->fd[0]);
		close((*all)->out_fd);
		execve((*all)->bin_path2, (*all)->cmd2, NULL);
	}
	exit(EXIT_SUCCESS);
}

/*----------------------------------------------------------------*/

static void	close_fds(t_info **all)
{
	if ((*all)->in_fd != -1)
		close((*all)->in_fd);
	close((*all)->out_fd);
	close((*all)->fd[0]);
	close((*all)->fd[1]);
}

/*----------------------------------------------------------------*/

void	exec_cmds(t_info **all)
{
	int	pid1;
	int	pid2;

	pid1 = fork();
	if (pid1 == -1)
	{
		perror("fork1: ");
		ft_free(all);
	}
	if (pid1 == 0)
		exec_cmd_1(all);
	pid2 = fork();
	if (pid2 == -1)
	{
		perror("fork2: ");
		ft_free(all);
	}
	if (pid2 == 0)
		exec_cmd_2(all);
	close_fds(all);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
}
