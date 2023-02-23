/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:40:53 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/18 12:24:18 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	path_invalid(t_info **all, char *str)
{
	if ((*all)->in_fd == -1)
	{
		ft_printf("error: no such file or directory: %s\n", str);
		ft_printf("error: %s: command not found\n", (*all)->cmd2[0]);
	}
	else
	{
		ft_printf("error: %s: command not found\n", (*all)->cmd1[0]);
		ft_printf("error: %s: command not found\n", (*all)->cmd2[0]);
	}
	ft_free(all);
}

/*----------------------------------------------------------------*/

void	path_valid(t_info **all, char *str)
{
	if ((*all)->in_fd == -1)
	{
		ft_printf("error: no such file or directory: %s\n", str);
		if (!(*all)->bin_path2)
		{
			ft_printf("error: %s: command not found\n", (*all)->cmd2[0]);
			ft_free(all);
		}
	}
	else
	{
		if (!(*all)->bin_path1)
			ft_printf("error: %s: command not found\n", (*all)->cmd1[0]);
		if (!(*all)->bin_path2)
		{
			ft_printf("error: %s: command not found\n", (*all)->cmd2[0]);
			ft_free(all);
		}
	}	
}

/*----------------------------------------------------------------*/

void	ft_check(t_info **all, char *str)
{
	if (!(*all)->check_path)
	{
		path_invalid(all, str);
	}
	else
	{
		path_valid(all, str);
	}
}
