/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:17:31 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/18 12:26:59 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_free_2d(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	str = NULL;
}

/*----------------------------------------------------------------*/

void	ft_free(t_info **all)
{
	int	i;

	if ((*all)->fd[0] != -1)
		close((*all)->fd[0]);
	if ((*all)->fd[1] != -1)
		close((*all)->fd[1]);
	close((*all)->out_fd);
	if ((*all)->bin_path1)
		free((*all)->bin_path1);
	if ((*all)->bin_path2)
		free((*all)->bin_path2);
	i = 0;
	while ((*all)->cmd1[i])
		free((*all)->cmd1[i++]);
	free((*all)->cmd1);
	i = 0;
	while ((*all)->cmd2[i])
		free((*all)->cmd2[i++]);
	free((*all)->cmd2);
	free(*all);
	exit(EXIT_SUCCESS);
}
