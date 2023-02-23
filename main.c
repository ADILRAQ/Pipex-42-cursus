/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:08:11 by araqioui          #+#    #+#             */
/*   Updated: 2023/02/15 11:50:03 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int ac, char **av, char **env)
{
	t_info	*all;

	if (ac == 5 && env[0])
	{
		all = return_info(env, av);
		ft_check(&all, av[1]);
		if (pipe(all->fd) == -1)
		{
			perror("");
			ft_free(&all);
		}
		exec_cmds(&all);
		ft_free(&all);
	}
	else
	{
		if (ac != 5 && !env[0])
			ft_printf("error: Invalid number of arguments and environment\n");
		else if (ac != 5)
			ft_printf("error: Invalid number of arguments\n");
		else
			ft_printf("error: Invalid environment\n");
		exit(EXIT_FAILURE);
	}
}
