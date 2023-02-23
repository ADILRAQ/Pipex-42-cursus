/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitPaths.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:12:36 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/17 18:57:45 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static void	open_files(t_info **all, char **av)
{
	(*all)->in_fd = open(av[1], O_RDONLY);
	(*all)->out_fd = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if ((*all)->in_fd == -1 || (*all)->out_fd == -1)
	{
		if ((*all)->in_fd == -1 && (*all)->out_fd == -1)
		{
			perror("error: ");
			free(*all);
			exit(EXIT_FAILURE);
		}
		else if ((*all)->out_fd == -1)
		{
			perror("error: ");
			close((*all)->in_fd);
			free(*all);
			exit(EXIT_FAILURE);
		}
	}
}

/*----------------------------------------------------------------*/

static char	*find_path(char **env)
{
	int	i;

	i = -1;
	while (env[++i])
	{
		if (ft_strncmp("PATH=", env[i], 5) == 0)
			return (&env[i][5]);
	}
	return (NULL);
}

/*----------------------------------------------------------------*/

static char	**split_paths(char **env)
{
	char	**path;
	char	*all_path;

	all_path = find_path(env);
	if (!all_path)
		return (NULL);
	path = ft_split(all_path, ':');
	return (path);
}

/*----------------------------------------------------------------*/

static char	*commands_check(char **path, char *cmd)
{
	char	*helper;
	char	*to_find;
	int		i;

	if (cmd[0] == '/')
	{
		if (access(cmd, F_OK | X_OK) == 0)
			return (ft_strdup(cmd));
		else
			return (NULL);
	}
	i = -1;
	while (path[++i])
	{
		helper = ft_strjoin(path[i], "/");
		to_find = ft_strjoin(helper, cmd);
		free(helper);
		if (access(to_find, F_OK | X_OK) == 0)
			return (to_find);
		free(to_find);
	}
	return (NULL);
}

/*----------------------------------------------------------------*/

t_info	*return_info(char **env, char **av)
{
	t_info	*all;
	char	**path;

	all = malloc(sizeof(t_info));
	if (!all)
		exit(EXIT_FAILURE);
	open_files(&all, av);
	all->cmd1 = ft_split(av[2], ' ');
	all->cmd2 = ft_split(av[3], ' ');
	path = split_paths(env);
	if (!path)
	{
		if (all->in_fd != -1)
			close(all->in_fd);
		close(all->out_fd);
		all->check_path = NULL;
		all->bin_path1 = NULL;
		all->bin_path2 = NULL;
		return (all);
	}
	all->check_path = "";
	all->bin_path1 = commands_check(path, all->cmd1[0]);
	all->bin_path2 = commands_check(path, all->cmd2[0]);
	ft_free_2d(path);
	return (all);
}
